@interface HFEventBuilder : NSObject

+ (id)eventBuilderForEvent:(id)a0;

- (id)init;
- (id)initWithEvent:(id)a0;
- (id)buildNewEventFromCurrentState;

@end
