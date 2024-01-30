@class NSString;

@interface WFAppSessionCompletedEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) unsigned int duration;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;

@end
