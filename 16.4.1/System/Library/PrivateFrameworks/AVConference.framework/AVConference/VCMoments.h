@class VideoAttributes, NSString, VCMomentsHistory, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VCMoments : NSObject <VCMomentsMessenger> {
    id _delegate;
    id _transportDelegate;
    unsigned int _streamToken;
    VCMomentsHistory *_momentsHistory;
    unsigned char _mode;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int _currentActiveRequestsCount;
    BOOL _enableLocalVideoRecording;
    BOOL _isClientRegistered;
    NSMutableSet *_requests;
    BOOL _lastRequest;
    unsigned int _currentTimestamp;
}

@property (nonatomic) unsigned int capabilities;
@property (readonly, nonatomic) BOOL isActive;
@property (retain, nonatomic) VideoAttributes *remoteScreenAttributes;
@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)fileSize:(id)a0;
+ (int)typeForRequest:(id)a0;
+ (unsigned long long)countForRequestType:(int)a0;
+ (unsigned long long)deviceFreeDiskSpace;
+ (BOOL)deviceHasSufficientFreeSpace;

- (void)dealloc;
- (void)setFrameRate:(float)a0;
- (id)initWithStreamToken:(unsigned int)a0 delegate:(id)a1;
- (unsigned long long)directorySize:(id)a0;
- (void)setTransportDelegate:(id)a0;
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList { } *)a0 timestamp:(unsigned int)a1;
- (id)momentsDelegate;
- (void)_generateRequest:(unsigned char)a0 requestState:(unsigned char)a1 transactionID:(id)a2 timestamp:(unsigned int)a3;
- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList { } *)a0 timestamp:(unsigned int)a1;
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 cameraStatusBits:(unsigned char)a1 timestamp:(unsigned int)a2;
- (void)cleanupActiveRequests;
- (void)clearHistoryBuffer;
- (void)deregisterClient;
- (void)getInitialRemoteScreenAttributes:(id)a0;
- (void)handleInsufficientFreeSpaceWithRequest:(id)a0 delegate:(id)a1;
- (BOOL)isHistorySupported;
- (void)notifyFinishWithRequest:(id)a0 didSucceed:(BOOL)a1 fileSize:(long long)a2;
- (void)notifyLocalFinishWithRequest:(id)a0 didSucceed:(BOOL)a1;
- (void)notifyRemoteFinishWithRequest:(id)a0 didSucceed:(BOOL)a1 fileSize:(long long)a2;
- (BOOL)processClientRequest:(id)a0 error:(id *)a1;
- (void)processRemoteLivePhotoRequest:(id)a0;
- (void)processRemotePhotoRequest:(id)a0;
- (void)processRemoteRequest:(id)a0 withMediaType:(unsigned char)a1;
- (void)processRequest:(id)a0 isRemote:(BOOL)a1;
- (void)registerClient;
- (void)setMomentsDelegate:(id)a0;
- (id)transportDelegate;
- (void)updateActiveStatus;
- (void)updateRemoteScreenAttributes:(id)a0;
- (void)updateVCMomentsMode;
- (BOOL)validateIncomingRequest:(id)a0 isRemote:(BOOL)a1;
- (BOOL)validateNumberOfRequestsWithError:(id *)a0;

@end
