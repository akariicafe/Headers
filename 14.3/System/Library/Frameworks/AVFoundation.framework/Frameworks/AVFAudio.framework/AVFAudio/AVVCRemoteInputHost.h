@class AVVoiceController, NSMutableArray;
@protocol AVAudioRemoteInputPlugin;

@interface AVVCRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate> {
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;
    AVVoiceController *mMotherController;
}

- (id)allBundles:(id *)a0;
- (void)dealloc;
- (void)inputPlugin:(id)a0 didPublishDevice:(id)a1;
- (void)inputPlugin:(id)a0 didUnpublishDevice:(id)a1;
- (id)initializePlugins;
- (void)invalidatePlugins;
- (id)findDeviceWithIdentifier:(id)a0;
- (id)findFirstBluetoothDevice;
- (void)setParentVoiceController:(id)a0;

@end
