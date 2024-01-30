@class NSString, AVOutputDevice, AVOutputContext;

@interface MPAVOutputContextController : NSObject

@property (retain, nonatomic) NSString *outputDeviceName;
@property (retain, nonatomic) AVOutputDevice *outputDevice;
@property (readonly, nonatomic) AVOutputContext *outputContext;
@property (readonly, nonatomic, getter=isExternalOutputDevicePicked) BOOL externalOutputDevicePicked;

+ (id)keyPathsForValuesAffectingExternalOutputDevicePicked;

- (id)initWithOutputContext:(id)a0;
- (void)updateSelectedOutputDevice;
- (void).cxx_destruct;
- (id)init;
- (void)_outputDeviceChangedNotification:(id)a0;
- (void)setOutputDevice:(id)a0 completion:(id /* block */)a1;

@end
