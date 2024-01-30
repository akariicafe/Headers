@interface CAWhitePointRamper : CAWindowServerRamper

@property struct { float matrix[9]; } whitePointStart;
@property struct { float matrix[9]; } whitePointEnd;
@property float scaleStart;
@property float scaleEnd;

- (id)initWithDisplay:(id)a0;
- (void)rampCallback:(id)a0;

@end
