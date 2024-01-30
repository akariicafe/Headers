@class NUComposition;

@interface NUCompositionSourceDefinition : NUSourceDefinition

@property (readonly) NUComposition *composition;

- (id)init;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
