@class NSString;

@interface WFContextualActionMetricEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasTrackpad;
@property (nonatomic) unsigned int itemCount;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;

@end
