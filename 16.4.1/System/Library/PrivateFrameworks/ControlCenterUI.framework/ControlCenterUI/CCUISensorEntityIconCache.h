@class NSObject;
@protocol OS_dispatch_queue;

@interface CCUISensorEntityIconCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;
+ (struct CGSize { double x0; double x1; })iconSize;

- (id)continuityCaptureIconForExtensionIdentifier:(id)a0;
- (id)_init;
- (id)imageForEntity:(id)a0;
- (void)preheatImageForSensorEntity:(id)a0;
- (id)_imageInBundle:(id)a0 named:(id)a1 needsTreatment:(BOOL)a2;
- (id)_keyboardSettingsIcon;
- (void).cxx_destruct;

@end
