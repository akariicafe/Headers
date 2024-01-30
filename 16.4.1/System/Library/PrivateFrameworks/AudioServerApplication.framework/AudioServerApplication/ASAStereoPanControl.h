@interface ASAStereoPanControl : ASAControl

@property (nonatomic) float value;
@property (readonly, nonatomic) unsigned int leftPanChannel;
@property (readonly, nonatomic) unsigned int rightPanChannel;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (float)value;
- (void)setValue:(float)a0;
- (unsigned int)rightPanChannel;
- (unsigned int)leftPanChannel;
- (id)coreAudioClassName;
- (unsigned int)getPanChannel:(BOOL)a0;

@end
