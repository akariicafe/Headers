@class PVLivePlayerCameraSource, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface JFXPickerCameraSource : NSObject

@property (class, readonly) JFXPickerCameraSource *sharedInstance;

@property (retain, nonatomic) NSMutableSet *registeredPickers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registeredPickersQueue;
@property (retain, nonatomic) PVLivePlayerCameraSource *registeredPickersSource;
@property (readonly, nonatomic) PVLivePlayerCameraSource *pickerSource;
@property (readonly, nonatomic) BOOL isPickerPreviewing;

- (id)init;
- (void).cxx_destruct;
- (void)registerPickerAsPreviewingWithObject:(id)a0;
- (void)unregisterPickerAsPreviewingWithObject:(id)a0;

@end
