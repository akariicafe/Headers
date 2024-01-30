@class NSString;

@interface TRIDisenrollRolloutPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;

+ (id)descriptor;

@end
