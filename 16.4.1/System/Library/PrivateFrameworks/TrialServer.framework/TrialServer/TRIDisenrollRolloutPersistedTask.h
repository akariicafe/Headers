@class NSString;

@interface TRIDisenrollRolloutPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) int triggerEvent;
@property (nonatomic) BOOL hasTriggerEvent;

+ (id)descriptor;

@end
