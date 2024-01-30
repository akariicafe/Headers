@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (id)dictionaryRepresentation;
- (id)debugDescription;
- (id)description;
- (void)track;
- (id)propertyNames;
- (void)trackWithCount:(int)a0;
- (Class)codableEventClass;
- (id)coreAnalyticsKey;
- (id)serializableEvent;

@end
