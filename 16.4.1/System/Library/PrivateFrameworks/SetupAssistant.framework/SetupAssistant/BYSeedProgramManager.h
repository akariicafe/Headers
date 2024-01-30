@class NSDictionary;

@interface BYSeedProgramManager : NSObject

@property (readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;

- (long long)currentSeedProgram;
- (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1 completion:(id /* block */)a2;

@end
