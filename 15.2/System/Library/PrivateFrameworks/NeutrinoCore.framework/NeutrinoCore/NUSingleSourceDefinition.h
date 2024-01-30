@protocol NUSourceDerivation;

@interface NUSingleSourceDefinition : NUSourceDefinition

@property (retain) id<NUSourceDerivation> sourceDerivation;

- (void).cxx_destruct;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
