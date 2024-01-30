@class NSString, AVOutputContextInternal;

@interface AVOutputContext : NSObject <NSSecureCoding> {
    AVOutputContextInternal *_outputContext;
}

@property (class, readonly, nonatomic) id /* block */ defaultCommunicationChannelManagerCreator;
@property (class, readonly, nonatomic) id /* block */ commChannelUUIDCommunicationChannelManagerCreator;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueFigRoutingContext { } *figRoutingContext;
@property (readonly, nonatomic) NSString *deviceName;

+ (id)outputContext;
+ (void)initialize;
+ (id)auxiliaryOutputContext;
+ (id)outputContextForID:(id)a0;
+ (id)sharedAudioPresentationOutputContext;
+ (id)preferredOutputDevicesForAudioSession:(id)a0;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)sharedSystemScreenContext;
+ (id)defaultSharedOutputContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (Class)defaultOutputContextImplClass;
+ (id)iTunesAudioContext;
+ (id)sharedSystemAudioContext;

- (float)volume;
- (void)setOutputDevices:(id)a0;
- (id)ID;
- (void)setVolume:(float)a0;
- (id)outputDevices;
- (BOOL)supportsMultipleOutputDevices;
- (id)impl;
- (id)init;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (BOOL)canSetVolume;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (void)dealloc;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (id)communicationChannelDelegate;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (int)applicationProcessID;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)contextID;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (BOOL)providesControlForAllVolumeFeatures;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)resetPredictedOutputDevice;
- (id)predictedOutputDevice;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(id /* block */)a0;
- (id)outputDevice;
- (void)removeOutputDevice:(id)a0;
- (id)description;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (void)setApplicationProcessID:(int)a0;
- (id)initWithOutputContextImpl:(id)a0;
- (unsigned long long)outputDeviceFeatures;
- (BOOL)isEqual:(id)a0;
- (void)muteAllOutputDevicesWithCompletionHandler:(id /* block */)a0;
- (BOOL)getApplicationProcessID:(int *)a0;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (id)outputContextType;
- (void)addOutputDevice:(id)a0;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImplDidChangePredictedOutputDevice:(id)a0;
- (void)setCommunicationChannelDelegate:(id)a0;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (id)outgoingCommunicationChannel;
- (void)encodeWithCoder:(id)a0;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;

@end
