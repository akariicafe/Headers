@interface WLKProcessInfo : NSObject

@property (nonatomic) struct __SecTask { } *currentTask;

+ (id)currentProcessInfo;

- (id)init;
- (id)valueForEntitlement:(id)a0;
- (void)dealloc;
- (BOOL)boolValueForEntitlement:(id)a0;
- (BOOL)valueForEntitlement:(id)a0 containsObject:(id)a1;

@end
