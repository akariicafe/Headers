@interface HFDurationEventBuilder : HFEventBuilder

@property (nonatomic) double duration;

- (id)initWithEvent:(id)a0;
- (id)description;
- (id)buildNewEventFromCurrentState;

@end
