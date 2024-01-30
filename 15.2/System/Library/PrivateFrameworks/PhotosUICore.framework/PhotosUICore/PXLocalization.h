@class NSString;

@interface PXLocalization : NSObject

@property (class, readonly, nonatomic) NSString *currentDeviceCanonicalModel;
@property (class, readonly, nonatomic) NSString *titleForEmptyPhotoLibrary;
@property (class, readonly, nonatomic) NSString *messageForEmptyPhotoLibrary;
@property (class, readonly, nonatomic) NSString *openCameraButtonTitleForEmptyPhotoLibrary;

@end
