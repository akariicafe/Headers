@class NSString, NSMutableDictionary;
@protocol CAMVideoPersistenceCoordinationDelegate;

@interface CAMVideoPersistenceCoordinator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_receivedCoordinationInfos;
@property (readonly, nonatomic) NSMutableDictionary *_pendingLocalPersistenceResults;
@property (readonly, nonatomic) NSString *_loggingPrefix;
@property (readonly, weak, nonatomic) id<CAMVideoPersistenceCoordinationDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *loggingIdentifier;
@property (readonly, nonatomic) BOOL hasReceivedAllExpectedResponses;

- (void)updateForTimeoutTimerFiredForCoordinationInfo:(id)a0 request:(id)a1;
- (unsigned int)_powerAssertionReasonForResultSpecifiers:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)a0 overCaptureResultSpecifiers:(unsigned long long)a1 request:(id)a2 shouldPersistAsSingleAsset:(BOOL)a3;
- (void)updateForCoordinationInfo:(id)a0 localPersistenceResult:(id)a1 request:(id)a2;
- (id)initWithDelegate:(id)a0 loggingIdentifier:(id)a1;
- (id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)a0 receivedCoordinationInfos:(id)a1;
- (void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(unsigned long long)a0 request:(id)a1;

@end
