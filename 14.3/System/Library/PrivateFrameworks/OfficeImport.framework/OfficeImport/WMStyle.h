@interface WMStyle : CMStyle

- (void)addCharacterProperties:(id)a0;
- (id)initWithWDStyle:(id)a0;
- (void)cascadeWithStyle:(id)a0;
- (id)initWithWDStyle:(id)a0 isInTextFrame:(BOOL)a1;
- (void)ResoveInterPropertyDependencies;
- (id)cssStyleString;
- (id)initWithWMStyle:(id)a0;
- (id)initWithWDCharacterProperties:(id)a0;

@end
