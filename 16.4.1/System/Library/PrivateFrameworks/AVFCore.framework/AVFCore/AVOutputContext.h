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
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)preferredOutputDevicesForAudioSession:(id)a0;
+ (id)iTunesAudioContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)allSharedAudioOutputContexts;
+ (id)sharedSystemRemotePoolContext;
+ (id)outputContext;
+ (id)sharedSystemScreenContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (Class)defaultOutputContextImplClass;
+ (id)auxiliaryOutputContext;
+ (id)addSharedAudioOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)defaultSharedOutputContext;
+ (id)outputContextForID:(id)a0;
+ (id)sharedAudioPresentationOutputContext;

- (id)predictedOutputDevice;
- (void)increaseVolumeByCount:(long long)a0;
- (BOOL)canSetVolume;
- (void)resetPredictedOutputDevice;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (id)communicationChannelDelegate;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (long long)volumeControlType;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (id)ID;
- (id)contextID;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (id)outputContextType;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (void)decreaseVolumeByCount:(long long)a0;
- (id)initWithOutputContextImpl:(id)a0;
- (void)setCommunicationChannelDelegate:(id)a0;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (void)outputContextImplDidChangeVolumeControlType:(id)a0;
- (id)impl;
- (void)setOutputDevices:(id)a0;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (BOOL)supportsMultipleOutputDevices;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (unsigned long long)outputDeviceFeatures;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (void)setVolume:(float)a0;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (int)applicationProcessID;
- (id)outputDevices;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)outgoingCommunicationChannel;
- (void)dealloc;
- (void)addOutputDevice:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (void)removeOutputDevice:(id)a0;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (id)init;
- (id)outputDevice;
- (BOOL)providesControlForAllVolumeFeatures;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (id)description;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (void)outputContextImplDidChangePredictedOutputDevice:(id)a0;
- (float)volume;
- (void)setApplicationProcessID:(int)a0;
- (BOOL)getApplicationProcessID:(int *)a0;

@end
