@interface SBSUIHandleDeviceLockSceneActionResponse : BSActionResponse

@property (readonly, nonatomic) long long deviceLockHandlingResult;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithDeviceLockHandlingResult:(long long)a0 error:(id)a1;

@end
