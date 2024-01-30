@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void)track;
- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)propertyNames;
- (Class)codableEventClass;
- (id)serializableEvent;
- (id)coreAnalyticsKey;
- (void)trackWithCount:(int)a0;

@end
