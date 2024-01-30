@interface HFDurationEventBuilder : HFEventBuilder

@property (nonatomic) double duration;

- (id)initWithEvent:(id)a0;
- (id)description;
- (id)eventType;
- (id)comparisonKey;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)a0;

@end
