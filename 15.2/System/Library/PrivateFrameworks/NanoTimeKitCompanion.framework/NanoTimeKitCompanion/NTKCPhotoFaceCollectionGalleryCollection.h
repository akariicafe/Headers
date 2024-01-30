@class NSString, CLKDevice;

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate> {
    CLKDevice *_device;
    NSString *_albumName;
}

- (void).cxx_destruct;
- (id)newFace;
- (void)dealloc;
- (id)initForDevice:(id)a0;
- (void)photoAlbumChanged;

@end
