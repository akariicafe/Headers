@class NSString, PHPhotoLibrary;
@protocol NSFastEnumeration;

@interface _PXPhotosViewPlacesMomentsDataSourceProvider : NSObject <PXPhotosDataSourceProvider> {
    id<NSFastEnumeration> _assets;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
