@interface ALAsset : NSObject

@property (retain, nonatomic) id internal;
@property (readonly, nonatomic) ALAsset *originalAsset;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;

+ (struct CGSize { double x0; double x1; })largePreviewImageSizeForSize:(struct CGSize { double x0; double x1; })a0;

- (struct CGImage { } *)thumbnail;
- (id)valueForProperty:(id)a0;
- (BOOL)isValid;
- (void)dealloc;
- (id)_uuid;
- (id)description;
- (BOOL)isDeletable;
- (id)defaultRepresentation;
- (struct CGImage { } *)aspectRatioThumbnail;
- (void)setVideoAtPath:(id)a0 completionBlock:(id /* block */)a1;
- (id)_newContentEditingOutputWithType:(long long)a0;
- (id)_typeAsString;
- (id)initWithManagedAsset:(id)a0 library:(id)a1;
- (id)representationForUTI:(id)a0;
- (void)requestDefaultRepresentation;
- (void)setImageData:(id)a0 metadata:(id)a1 completionBlock:(id /* block */)a2;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)a0 metadata:(id)a1 completionBlock:(id /* block */)a2;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)a0 completionBlock:(id /* block */)a1;

@end
