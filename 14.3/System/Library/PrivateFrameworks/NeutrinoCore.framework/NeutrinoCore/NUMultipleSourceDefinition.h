@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition

@property (readonly) NSArray *sourceDefinitions;

- (long long)mediaType;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithSourceDefinitions:(id)a0;

@end
