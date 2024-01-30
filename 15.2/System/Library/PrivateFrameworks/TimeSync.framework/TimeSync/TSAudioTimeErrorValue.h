@interface TSAudioTimeErrorValue : NSObject

@property (readonly, nonatomic) double sampleTimestamp;
@property (readonly, nonatomic) double timeError;

- (id)description;
- (id)initWithSampleTimestamp:(double)a0 andTimeError:(double)a1;

@end
