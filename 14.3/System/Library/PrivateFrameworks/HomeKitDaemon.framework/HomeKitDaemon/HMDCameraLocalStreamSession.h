@class HMDCameraParameterSelection, HMDCameraNetworkConfig, NSString;
@protocol HMDCameraRemoteStreamSenderProtocol;

@interface HMDCameraLocalStreamSession : HMDCameraStreamSession <HMFLogging>

@property (readonly, nonatomic) id<HMDCameraRemoteStreamSenderProtocol> streamSender;
@property (retain, nonatomic) HMDCameraParameterSelection *parameterSelection;
@property (nonatomic) unsigned long long streamState;
@property (readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)logIdentifier;
- (id)stateAsString;
- (BOOL)containsState:(long long)a0;
- (id)initWithSessionID:(id)a0 reachabilityPath:(unsigned long long)a1 streamSender:(id)a2 remoteCapabilities:(id)a3 localNetworkConfig:(id)a4 streamPreference:(id)a5;

@end
