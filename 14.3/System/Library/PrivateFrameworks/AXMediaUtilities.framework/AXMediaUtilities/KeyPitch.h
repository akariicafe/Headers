@interface KeyPitch : NSObject

@property (nonatomic) double frequency;
@property (nonatomic) double timeOffsetMS;

- (id)initWithFrequency:(double)a0 timeOffset:(double)a1;
- (id)description;

@end
