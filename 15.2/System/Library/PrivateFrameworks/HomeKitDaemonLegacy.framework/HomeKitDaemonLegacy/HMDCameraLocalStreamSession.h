@class HMDCameraParameterSelection, HMDCameraNetworkConfig, NSString;
@protocol HMDCameraRemoteStreamSenderProtocol;

@interface HMDCameraLocalStreamSession : HMDCameraStreamSession <HMFLogging>

@property (readonly) id<HMDCameraRemoteStreamSenderProtocol> streamSender;
@property (retain) HMDCameraParameterSelection *parameterSelection;
@property unsigned long long streamState;
@property (readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)updateState:(long long)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)stateAsString;
- (BOOL)containsState:(long long)a0;
- (id)initWithSessionID:(id)a0 reachabilityPath:(unsigned long long)a1 streamSender:(id)a2 remoteCapabilities:(id)a3 localNetworkConfig:(id)a4 streamPreference:(id)a5;

@end
