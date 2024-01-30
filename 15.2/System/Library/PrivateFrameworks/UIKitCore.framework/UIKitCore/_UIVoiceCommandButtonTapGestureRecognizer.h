@interface _UIVoiceCommandButtonTapGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) double pressEventBeginTimestamp;
@property (nonatomic) double pressEventEndTimestamp;

- (id)voiceCommandButtonTapDuration;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
