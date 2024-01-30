@class NSString, AVOutputContextInternal;

@interface AVOutputContext : NSObject <NSSecureCoding> {
    AVOutputContextInternal *_outputContext;
}

@property (class, readonly, nonatomic) id /* block */ defaultCommunicationChannelManagerCreator;
@property (class, readonly, nonatomic) id /* block */ commChannelUUIDCommunicationChannelManagerCreator;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueFigRoutingContext { } *figRoutingContext;
@property (readonly, nonatomic) NSString *deviceName;

+ (void)initialize;
+ (id)sharedSystemAudioContext;
+ (id)preferredOutputDevicesForAudioSession:(id)a0;
+ (id)outputContext;
+ (id)outputContextForID:(id)a0;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)defaultSharedOutputContext;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (id)addSharedAudioOutputContext;
+ (id)sharedSystemScreenContext;
+ (id)iTunesAudioContext;
+ (id)auxiliaryOutputContext;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (Class)defaultOutputContextImplClass;
+ (id)allSharedAudioOutputContexts;
+ (id)sharedSystemRemotePoolContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedAudioPresentationOutputContext;

- (id)impl;
- (BOOL)canSetVolume;
- (id)ID;
- (void)setVolume:(float)a0;
- (float)volume;
- (void)resetPredictedOutputDevice;
- (BOOL)getApplicationProcessID:(int *)a0;
- (id)outputDevices;
- (id)communicationChannelDelegate;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (id)predictedOutputDevice;
- (void)encodeWithCoder:(id)a0;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (int)applicationProcessID;
- (void)setOutputDevices:(id)a0;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (id)outputContextType;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (id)contextID;
- (id)description;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (void)addOutputDevice:(id)a0;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)setApplicationProcessID:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void)outputContextImplDidChangePredictedOutputDevice:(id)a0;
- (id)init;
- (BOOL)providesControlForAllVolumeFeatures;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (BOOL)supportsMultipleOutputDevices;
- (id)initWithOutputContextImpl:(id)a0;
- (void)removeOutputDevice:(id)a0;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (void)setCommunicationChannelDelegate:(id)a0;
- (id)outgoingCommunicationChannel;
- (unsigned long long)hash;
- (void)dealloc;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (id)outputDevice;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)outputDeviceFeatures;

@end
