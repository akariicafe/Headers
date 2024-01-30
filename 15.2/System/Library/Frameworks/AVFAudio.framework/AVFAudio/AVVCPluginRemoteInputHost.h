@class AVVoiceController, NSMutableArray;
@protocol AVAudioRemoteInputPlugin;

@interface AVVCPluginRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate> {
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;
    AVVoiceController *mMotherController;
}

- (void)dealloc;
- (void)inputPlugin:(id)a0 didPublishDevice:(id)a1;
- (void)inputPlugin:(id)a0 didUnpublishDevice:(id)a1;
- (id)initializePlugins;
- (void)invalidatePlugins;
- (id)allBundles:(id *)a0;
- (id)findDeviceWithIdentifier:(id)a0;
- (id)findFirstBluetoothDevice;
- (void)setParentVoiceController:(id)a0;
- (id)mockPluginEndpoint;

@end
