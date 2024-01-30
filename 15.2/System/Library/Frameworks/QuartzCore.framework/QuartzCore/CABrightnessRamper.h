@interface CABrightnessRamper : CAWindowServerRamper

@property double sdrNitsBegin;
@property double sdrNitsEnd;
@property double headroomBegin;
@property double headroomEnd;
@property double limitBegin;
@property double limitEnd;

- (id)initWithDisplay:(id)a0;
- (void)rampCallback:(id)a0;

@end
