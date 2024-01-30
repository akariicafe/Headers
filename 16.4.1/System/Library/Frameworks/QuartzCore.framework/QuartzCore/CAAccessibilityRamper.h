@interface CAAccessibilityRamper : CAWindowServerRamper

@property double axScaleBegin;
@property double axScaleEnd;

- (id)initWithDisplay:(id)a0;
- (void)rampCallback:(id)a0;

@end
