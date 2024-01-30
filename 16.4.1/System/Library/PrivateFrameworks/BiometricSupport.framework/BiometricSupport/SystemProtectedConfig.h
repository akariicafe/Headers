@interface SystemProtectedConfig : NSObject

@property (nonatomic) int biometryEnabled;
@property (nonatomic) int unlockEnabled;
@property (nonatomic) int identificationEnabled;
@property (nonatomic) int loginEnabled;
@property (nonatomic) int unlockTokenMaxLifetime;
@property (nonatomic) int periocularMatchEnabled;

- (id)init;

@end
