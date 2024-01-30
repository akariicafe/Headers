@interface KeyPitch : NSObject

@property (nonatomic) double frequency;
@property (nonatomic) double volume;
@property (nonatomic) double timeOffsetMS;

- (id)description;
- (id)initWithFrequency:(double)a0 volume:(double)a1 timeOffset:(double)a2;

@end
