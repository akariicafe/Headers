@interface LogClosedNode : GPBMessage

@property (nonatomic) unsigned long long timestampMs;
@property (nonatomic) int earliestVersionForNextTree;

+ (id)descriptor;

@end
