@class NSString, CLKDevice;

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKCFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate> {
    CLKDevice *_device;
    NSString *_albumName;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)newFace;
- (id)initForDevice:(id)a0;
- (void)photoAlbumChanged;

@end
