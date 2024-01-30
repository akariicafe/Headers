@interface ASAControl : ASAObject

@property (readonly, nonatomic) unsigned int controlElement;
@property (readonly, nonatomic) unsigned int controlScope;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)controlElement;
- (unsigned int)controlScope;
- (id)coreAudioClassName;

@end
