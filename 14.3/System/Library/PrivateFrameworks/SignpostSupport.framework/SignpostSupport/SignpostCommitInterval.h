@class NSString;

@interface SignpostCommitInterval : SignpostAnimationSubInterval

@property (readonly, nonatomic) unsigned int transactionSeed;
@property (readonly, nonatomic) unsigned long long threadID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *executablePath;

- (void).cxx_destruct;
- (id)initWithCommitInterval:(id)a0;

@end
