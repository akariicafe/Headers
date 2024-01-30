@interface CABrightnessRamper : CAWindowServerRamper

@property double sdrNitsBegin;
@property double sdrNitsEnd;
@property double headroomBegin;
@property double headroomEnd;
@property double limitBegin;
@property double limitEnd;
@property double contrastEnhancerBegin;
@property double contrastEnhancerEnd;
@property double lowAmbientStrengthBegin;
@property double lowAmbientStrengthEnd;

- (id)initWithDisplay:(id)a0;
- (void)rampCallback:(id)a0;

@end
