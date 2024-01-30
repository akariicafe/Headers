@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition

@property (readonly) NSArray *sourceDefinitions;

- (long long)mediaType;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithSourceDefinitions:(id)a0;

@end
