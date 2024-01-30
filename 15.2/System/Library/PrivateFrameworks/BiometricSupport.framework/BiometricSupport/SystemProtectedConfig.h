@interface SystemProtectedConfig : NSObject

@property (nonatomic) int biometryEnabled;
@property (nonatomic) int unlockEnabled;
@property (nonatomic) int identificationEnabled;
@property (nonatomic) int loginEnabled;
@property (nonatomic) int unlockTokenMaxLifetime;

- (id)init;

@end
