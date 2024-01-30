@class NSString, AVOutputDevice, AVOutputContext;

@interface MPAVOutputContextController : NSObject

@property (retain) NSString *outputDeviceName;
@property (retain) AVOutputDevice *outputDevice;
@property (readonly) AVOutputContext *outputContext;
@property (readonly, getter=isExternalOutputDevicePicked) BOOL externalOutputDevicePicked;

+ (id)keyPathsForValuesAffectingExternalOutputDevicePicked;

- (id)init;
- (void).cxx_destruct;
- (void)_outputDeviceChangedNotification:(id)a0;
- (void)setOutputDevice:(id)a0 completion:(id /* block */)a1;
- (id)initWithOutputContext:(id)a0;
- (void)updateSelectedOutputDevice;

@end
