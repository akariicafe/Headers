@class NUComposition;

@interface NUCompositionSourceDefinition : NUSourceDefinition

@property (readonly) NUComposition *composition;

- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
