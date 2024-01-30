@class NSString;
@protocol HMDActiveSiriSessionInfoDelegate, HMDDataStreamBulkSendSession;

@interface HMDActiveSiriSessionInfo : NSObject <HMFLogging>

@property (weak, nonatomic) id<HMDActiveSiriSessionInfoDelegate> delegate;
@property (retain, nonatomic) id<HMDDataStreamBulkSendSession> bulkSendSession;
@property (nonatomic) BOOL didBulkSendSessionFail;
@property (nonatomic) BOOL didBulkSendSessionComplete;
@property (nonatomic) BOOL didSiriSessionStart;
@property (nonatomic) BOOL didSiriSessionStop;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void)invalidate;
- (void)_bulkSendDidFail;
- (BOOL)_handleFrame:(id)a0;
- (void)_bulkSendDidComplete;
- (BOOL)isBulkSendActive;
- (void)_doReadAudioFrames;
- (BOOL)isSiriSessionActive;
- (void)markSiriPluginReady;
- (void)markSiriPluginStopped;
- (void)setActiveBulkSendSession:(id)a0;

@end
