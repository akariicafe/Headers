@interface ALAsset : NSObject

@property (retain, nonatomic) id internal;
@property (readonly, nonatomic) ALAsset *originalAsset;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;

+ (struct CGSize { double x0; double x1; })largePreviewImageSizeForSize:(struct CGSize { double x0; double x1; })a0;

- (id)valueForProperty:(id)a0;
- (struct CGImage { } *)thumbnail;
- (void)dealloc;
- (id)defaultRepresentation;
- (BOOL)isValid;
- (id)_uuid;
- (id)description;
- (BOOL)isDeletable;
- (struct CGImage { } *)aspectRatioThumbnail;
- (id)initWithManagedAsset:(id)a0 library:(id)a1;
- (id)_typeAsString;
- (id)representationForUTI:(id)a0;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)a0 metadata:(id)a1 completionBlock:(id /* block */)a2;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)a0 completionBlock:(id /* block */)a1;
- (id)_newContentEditingOutputWithType:(long long)a0;
- (void)setImageData:(id)a0 metadata:(id)a1 completionBlock:(id /* block */)a2;
- (void)setVideoAtPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)requestDefaultRepresentation;

@end
