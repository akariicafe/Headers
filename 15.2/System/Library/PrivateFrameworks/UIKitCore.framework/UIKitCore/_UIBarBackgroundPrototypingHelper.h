@class NSString, NSMutableArray;

@interface _UIBarBackgroundPrototypingHelper : NSObject <PTSettingsKeyObserver> {
    NSMutableArray *_callbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;

@end
