@class NSDate, NSString, NSArray, RTCReporting, NSMutableDictionary, VCAggregator, NSObject, NSNumber;
@protocol OS_dispatch_queue, OS_nw_activity, OS_os_transaction;

@interface RTCReportingAgent : NSObject <VCAggregatorDelegate, RTCReportingMessageSentNotifier> {
    unsigned int _callID;
    void *_symptomReporter;
    int _nextUnassignedReportingModuleID;
    NSObject<OS_nw_activity> *_nwActivity;
    NSDate *_conversationTimeBase;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly) VCAggregator *aggregator;
@property (readonly) RTCReporting *reportingObject;
@property (readonly) NSObject<OS_dispatch_queue> *reportingQueue;
@property (copy) NSArray *backends;
@property int clientType;
@property (readonly) int nextUnassignedReportingModuleID;
@property (readonly) NSMutableDictionary *userInfoMap;
@property (getter=isABCForceDisabled) BOOL forceDisableABC;
@property NSNumber *subSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithConfig:(struct { unsigned int x0; struct __CFString *x1; struct __CFDate *x2; int x3; void *x4; id x5; id /* block */ x6; })a0;
- (BOOL)sendMessageWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2 error:(id *)a3;
- (int)learntBitrateForSegment:(id)a0 defaultValue:(int)a1;
- (void)report:(id)a0 segmentDirection:(int)a1;
- (void)reportQR:(id)a0;
- (void)sendMessageWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)initAdaptiveLearningWithParameters:(id)a0;
- (id)deriveFromParentHierarchyToken:(id)a0;
- (id)newAggregatorForClientType:(int)a0 nwActivity:(id)a1;
- (void)finalizeAggregation;
- (void)sendAggregatedCallReport;
- (void)sendAggregatedSessionReport;
- (unsigned short)reportingSegmentMethodForClientType:(int)a0;
- (unsigned short)reportingCallMethodForClientType:(int)a0;
- (unsigned short)reportingSessionMethodForClientType:(int)a0;
- (unsigned short)reportingSessionTypeForClientType:(int)a0;
- (void)didSendMessageForReportingClient:(id)a0 event:(id)a1;
- (void)setAggregatorForClientType:(int)a0;
- (void)reportingSetNetworkActivityReportingEnabled:(BOOL)a0;
- (void)releaseReportingObject;
- (void)reportingSymptom:(unsigned int)a0 withOptionalDict:(struct __CFDictionary { } *)a1;
- (void)reportingSetReportCallback:(void /* function */ *)a0 withContext:(void *)a1;

@end
