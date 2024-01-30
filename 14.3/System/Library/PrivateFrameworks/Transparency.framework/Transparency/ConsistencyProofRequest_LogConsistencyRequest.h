@interface ConsistencyProofRequest_LogConsistencyRequest : GPBMessage

@property (nonatomic) int logType;
@property (nonatomic) int application;
@property (nonatomic) unsigned long long startRevision;
@property (nonatomic) unsigned long long endRevision;

+ (id)descriptor;

@end
