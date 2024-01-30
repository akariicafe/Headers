@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void)track;
- (id)description;
- (id)propertyNames;
- (id)debugDescription;
- (Class)codableEventClass;
- (id)serializableEvent;
- (void)trackWithCount:(int)a0;

@end
