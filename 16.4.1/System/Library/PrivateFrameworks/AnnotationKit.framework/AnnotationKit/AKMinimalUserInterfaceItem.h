@class NSString;

@interface AKMinimalUserInterfaceItem : NSObject <AKUserInterfaceItem> {
    long long _tag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tag;
- (id)initWithTag:(long long)a0;

@end
