@interface ConsistencyProofRequest_LogConsistencyRequest : GPBMessage

@property (nonatomic) unsigned long long startRevision;
@property (nonatomic) unsigned long long endRevision;

+ (id)descriptor;

@end
