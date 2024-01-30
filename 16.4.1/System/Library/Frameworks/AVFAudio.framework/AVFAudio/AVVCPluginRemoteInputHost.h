@class AVVoiceController, NSMutableArray;
@protocol AVAudioRemoteInputPlugin;

@interface AVVCPluginRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate> {
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;
}

@property (weak, nonatomic) AVVoiceController *mMotherController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)inputPlugin:(id)a0 didUnpublishDevice:(id)a1;
- (id)allBundles:(id *)a0;
- (id)findDeviceWithIdentifier:(id)a0;
- (id)findFirstBluetoothDevice;
- (void)inputPlugin:(id)a0 didPublishDevice:(id)a1;
- (void)invalidatePlugins;
- (id)mockPluginEndpoint;
- (void)setParentVoiceController:(id)a0;

@end
