@interface NRFProgressiveBracketingFrameParameters : NSObject

@property (nonatomic) int AGC;
@property (readonly, nonatomic) double integrationTime;
@property (readonly, nonatomic) float gain;

- (id)initWithIntegrationTime:(double)a0 gain:(float)a1 AGC:(int)a2;

@end
