@class NSString;

@interface _ABVCardTimeProvider : NSObject <ABVCardTimeProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)now;

@end
