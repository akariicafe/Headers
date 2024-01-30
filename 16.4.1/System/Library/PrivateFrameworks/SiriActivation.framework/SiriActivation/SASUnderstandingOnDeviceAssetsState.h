@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SASUnderstandingOnDeviceAssetsState : NSObject

@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uodAssetsqueue;
@property (readonly) BOOL understandingOnDeviceAssetsAvailable;

- (void)dealloc;
- (id)init;
- (void)_setUODAssetsAvailable:(BOOL)a0;
- (void)updateState;
- (void).cxx_destruct;

@end
