@class PipeDataTransfer, CBScalablePipe, NSObject;
@protocol OS_dispatch_source, OS_voucher;

@interface PipeInfo : NSObject {
    struct pthread_override_s { } *_qosOverride;
    struct pthread_override_s { } *_socketThreadQOSOverride;
}

@property (retain) NSObject<OS_dispatch_source> *pipeReadSource;
@property (retain) CBScalablePipe *pipe;
@property (retain) NSObject<OS_voucher> *voucher;
@property BOOL newProtocol;
@property BOOL versionInfoSent;
@property BOOL versionInfoReceived;
@property BOOL pipeDidConnectSent;
@property unsigned char version;
@property unsigned int supportedFeatures;
@property (retain) PipeDataTransfer *pipeDataTransfer;
@property (retain) PipeDataTransfer *ackData;
@property unsigned char localVersion;
@property unsigned int localSupportedFeatures;
@property BOOL useConnectStatusPDU;
@property BOOL connectionInitiator;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)releaseQOSOverride;
- (void)applyQOSOverride;

@end
