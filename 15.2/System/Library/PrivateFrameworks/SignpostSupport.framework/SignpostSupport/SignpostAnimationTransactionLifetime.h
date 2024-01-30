@class NSString;

@interface SignpostAnimationTransactionLifetime : SignpostAnimationSubInterval

@property (readonly, nonatomic) unsigned int transactionSeed;
@property (readonly, nonatomic) unsigned int swapId;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *executablePath;

- (void).cxx_destruct;
- (id)initWithTransactionSeedInterval:(id)a0;

@end
