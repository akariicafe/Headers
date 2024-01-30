@interface ASASliderControl : ASAControl

@property (nonatomic) unsigned int value;
@property (readonly, nonatomic) struct _ASASliderRange { unsigned int x0; unsigned int x1; } range;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (struct _ASASliderRange { unsigned int x0; unsigned int x1; })range;
- (unsigned int)value;
- (void)setValue:(unsigned int)a0;
- (id)coreAudioClassName;

@end
