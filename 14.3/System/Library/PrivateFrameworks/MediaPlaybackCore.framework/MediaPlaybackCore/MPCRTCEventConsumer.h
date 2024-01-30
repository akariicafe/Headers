@class NSString, RTCReporting, NSObject;
@protocol MPCPlaybackEngineEventStreamSubscription, OS_dispatch_group, OS_dispatch_queue;

@interface MPCRTCEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    RTCReporting *_rtcSessionPlaybackSession;
    RTCReporting *_rtcSessionPlaybackItem;
    NSObject<OS_dispatch_group> *_rtcSessionGroup;
    NSObject<OS_dispatch_queue> *_rtcSessionQueue;
}

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateFormatter;

- (id)init;
- (void).cxx_destruct;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;
- (void)_sendReportForSessionSummary:(id)a0 event:(id)a1;
- (void)_sendReportForItemSummary:(id)a0 event:(id)a1;
- (void)_sendReportForQueueLoad:(id)a0 event:(id)a1;
- (void)_sendReportForPlaybackSessionStart:(id)a0 event:(id)a1 withType:(long long)a2;
- (void)_sendReportForItemAssetLoad:(id)a0 event:(id)a1;
- (void)_generateSessionStartIfNeeded:(id)a0 forItemEvent:(id)a1;
- (id)_payloadForItemSummary:(id)a0 fromItemEvent:(id)a1;
- (id)_networkSignalPayload:(id)a0;
- (void)_sendReportWithToken:(id)a0 category:(long long)a1 type:(long long)a2 payload:(id)a3;
- (id)_payloadForSessionSummary:(id)a0 fromSessionEndEvent:(id)a1;
- (void)_sendReportWithSession:(id)a0 category:(long long)a1 type:(long long)a2 payload:(id)a3;
- (long long)_sessionStartReportingType:(id)a0 forItemEvent:(id)a1;
- (id)_payloadForSessionStart:(id)a0 fromEvent:(id)a1;
- (void)_getReportingSessionWithToken:(id)a0 completion:(id /* block */)a1;
- (id)_payloadForQueueLoad:(id)a0 fromQueueLoadEndEvent:(id)a1;
- (id)_payloadForItemAssetLoad:(id)a0 fromItemEvent:(id)a1;
- (id)_payloadForItemSummary:(id)a0 fromEvent:(id)a1;
- (id)_networkType:(id)a0 fromEvent:(id)a1;
- (id)_payloadForItemAssetLoad:(id)a0 fromEvent:(id)a1 withItemQueueIdentifier:(id)a2;
- (id)_rtcSessionInfoWithToken:(id)a0;
- (id)_rtcUserInfo;
- (void)_logReportSendResult:(BOOL)a0 category:(long long)a1 payload:(id)a2 error:(id)a3;

@end
