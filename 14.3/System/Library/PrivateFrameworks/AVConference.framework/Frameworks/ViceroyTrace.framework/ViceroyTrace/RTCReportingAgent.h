@class NSArray, VCAggregator, NSMutableDictionary, NSString, RTCReporting, NSObject;
@protocol OS_dispatch_queue;

@interface RTCReportingAgent : NSObject <VCAggregatorDelegate, RTCReportingMessageSentNotifier> {
    unsigned int _callID;
    void *_symptomReporter;
    int _nextUnassignedReportingModuleID;
}

@property (retain) RTCReporting *reportingObject;
@property (readonly) NSObject<OS_dispatch_queue> *reportingQueue;
@property (copy) NSArray *backends;
@property (retain) VCAggregator *aggregator;
@property int clientType;
@property (readonly) int nextUnassignedReportingModuleID;
@property (readonly) NSMutableDictionary *userInfoMap;
@property (getter=isABCForceDisabled) BOOL forceDisableABC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)learntBitrateForSegment:(id)a0 defaultValue:(int)a1;
- (void)report:(id)a0 segmentDirection:(int)a1;
- (void)reportQR:(id)a0;
- (void)initAdaptiveLearningWithParameters:(id)a0;
- (id)deriveFromParentHierarchyToken:(id)a0;
- (id)aggregatorForClientType:(int)a0;
- (void)sendAggregatedCallReport;
- (void)sendAggregatedSessionReport;
- (unsigned short)reportingSegmentMethodForClientType:(int)a0;
- (unsigned short)reportingCallMethodForClientType:(int)a0;
- (unsigned short)reportingSessionMethodForClientType:(int)a0;
- (unsigned short)reportingSessionTypeForClientType:(int)a0;
- (void)didSendMessageForReportingClient:(id)a0 event:(id)a1;
- (id)initWithCallID:(unsigned int)a0 clientType:(int)a1 parentHierarchyToken:(id)a2;
- (void)finalizeAggregation;
- (void)releaseReportingObject;
- (void)reportingSymptom:(unsigned int)a0 withOptionalDict:(struct __CFDictionary { } *)a1;
- (void)reportingSetReportCallback:(void /* function */ *)a0 withContext:(void *)a1;

@end
