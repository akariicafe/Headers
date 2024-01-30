@protocol NUSourceDerivation;

@interface NUSingleSourceDefinition : NUSourceDefinition

@property (retain) id<NUSourceDerivation> sourceDerivation;

- (id)init;
- (void).cxx_destruct;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
