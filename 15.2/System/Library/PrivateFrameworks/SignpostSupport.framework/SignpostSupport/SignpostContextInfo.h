@class NSString;

@interface SignpostContextInfo : NSObject <SignpostCARenderServerFrameMetadata>

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) unsigned int transactionSeed;
@property (readonly, nonatomic) unsigned long long earliestMCT;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) NSString *processName;

- (void).cxx_destruct;
- (id)initWithContextInfoEvent:(id)a0;

@end
