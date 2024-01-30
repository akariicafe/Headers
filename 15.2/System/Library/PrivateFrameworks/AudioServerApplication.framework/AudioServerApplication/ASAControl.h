@interface ASAControl : ASAObject

@property (readonly, nonatomic) unsigned int controlElement;
@property (readonly, nonatomic) unsigned int controlScope;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)coreAudioClassName;
- (unsigned int)controlScope;
- (unsigned int)controlElement;

@end
