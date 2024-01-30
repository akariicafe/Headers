@interface WMStyle : CMStyle

- (void)ResoveInterPropertyDependencies;
- (void)addCharacterProperties:(id)a0;
- (void)cascadeWithStyle:(id)a0;
- (id)cssStyleString;
- (id)initWithWDCharacterProperties:(id)a0;
- (id)initWithWDStyle:(id)a0;
- (id)initWithWDStyle:(id)a0 isInTextFrame:(BOOL)a1;
- (id)initWithWMStyle:(id)a0;

@end
