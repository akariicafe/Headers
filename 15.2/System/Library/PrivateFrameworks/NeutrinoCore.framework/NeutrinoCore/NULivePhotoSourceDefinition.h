@class NUSourceDefinition;

@interface NULivePhotoSourceDefinition : NUSourceDefinition

@property (readonly) NUSourceDefinition *image;
@property (readonly) NUSourceDefinition *video;

- (long long)mediaType;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithImageSourceDefinition:(id)a0 videoSourceDefinition:(id)a1;

@end
