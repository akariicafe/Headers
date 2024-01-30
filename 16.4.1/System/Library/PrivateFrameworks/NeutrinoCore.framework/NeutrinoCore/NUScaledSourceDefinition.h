@class NUSingleSourceDefinition;

@interface NUScaledSourceDefinition : NUSingleSourceDefinition

@property (readonly) NUSingleSourceDefinition *source;
@property (readonly) struct { long long width; long long height; } sourceSize;
@property (readonly) struct { long long width; long long height; } fullSize;

- (long long)mediaType;
- (struct { long long x0; long long x1; })scale;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSourceDefinition:(id)a0 sourceSize:(struct { long long x0; long long x1; })a1 fullSize:(struct { long long x0; long long x1; })a2;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
