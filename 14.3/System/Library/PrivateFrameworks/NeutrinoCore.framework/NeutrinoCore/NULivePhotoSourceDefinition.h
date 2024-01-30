@class NUSourceDefinition;

@interface NULivePhotoSourceDefinition : NUSourceDefinition

@property (readonly) NUSourceDefinition *image;
@property (readonly) NUSourceDefinition *video;

- (long long)mediaType;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithImageSourceDefinition:(id)a0 videoSourceDefinition:(id)a1;

@end
