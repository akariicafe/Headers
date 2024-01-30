@interface _TVProcessInfo : NSObject

@property (nonatomic) struct __SecTask { } *currentTask;
@property (readonly, nonatomic) BOOL hasPrivateEntitlement;
@property (readonly, nonatomic) BOOL hasiTunesAPIEntitlement;
@property (readonly, nonatomic) BOOL hasiTunesStoreEntitlement;

+ (id)currentProcessInfo;

- (id)init;
- (id)valueForEntitlement:(id)a0;
- (void)dealloc;
- (BOOL)boolValueForEntitlement:(id)a0;
- (BOOL)valueForEntitlement:(id)a0 containsObject:(id)a1;

@end
