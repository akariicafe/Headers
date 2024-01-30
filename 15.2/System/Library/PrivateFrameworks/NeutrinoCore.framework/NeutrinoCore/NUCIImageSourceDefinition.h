@class CIImage;

@interface NUCIImageSourceDefinition : NUSingleSourceDefinition

@property (readonly) CIImage *image;
@property (readonly) long long orientation;

- (long long)mediaType;
- (void).cxx_destruct;
- (id)init;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithCIImage:(id)a0 orientation:(long long)a1;

@end
