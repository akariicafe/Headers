@class NSDate, NSString, NSArray, RTCReporting, NSMutableDictionary, VCAggregator, NSObject, NSNumber;
@protocol OS_dispatch_queue, OS_nw_activity, OS_os_transaction;

@interface RTCReportingAgent : NSObject <VCAggregatorDelegate, RTCReportingMessageSentNotifier> {
    unsigned int _callID;
    void *_symptomReporter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _aggregatorLock;
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
@property (copy) NSNumber *subSessionId;
@property (copy) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)sendMessageWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2 error:(id *)a3;
- (void)dealloc;
- (id)initWithConfig:(struct { unsigned int x0; struct __CFString *x1; struct __CFDate *x2; int x3; BOOL x4; void *x5; id x6; struct __CFString *x7; struct __CFString *x8; struct __CFDictionary *x9; id /* block */ x10; })a0;
- (void)didSendMessageForReportingClient:(id)a0 event:(id)a1;
- (int)learntBitrateForSegment:(id)a0 defaultValue:(int)a1;
- (id)deriveFromParentHierarchyToken:(id)a0;
- (void)finalizeAggregation;
- (id)getUserInfoFromReportingConfiguration:(struct { unsigned int x0; struct __CFString *x1; struct __CFDate *x2; int x3; BOOL x4; void *x5; id x6; struct __CFString *x7; struct __CFString *x8; struct __CFDictionary *x9; id /* block */ x10; })a0;
- (id)newAggregatorForClientType:(int)a0 creationOptions:(struct { id x0; BOOL x1; struct __CFDate *x2; } *)a1;
- (void)releaseReportingObject;
- (void)report:(id)a0 segmentDirection:(int)a1;
- (void)reportQR:(id)a0;
- (void)reportingAgentGetAlgosScores:(double *)a0 newAlgosScore:(double *)a1;
- (unsigned short)reportingCallMethodForClientType:(int)a0;
- (unsigned short)reportingSegmentMethodForClientType:(int)a0;
- (unsigned short)reportingSessionMethodForClientType:(int)a0;
- (unsigned short)reportingSessionTypeForClientType:(int)a0;
- (void)reportingSetNetworkActivityReportingEnabled:(BOOL)a0;
- (void)reportingSetReportCallback:(void /* function */ *)a0 withContext:(void *)a1;
- (void)reportingSymptom:(unsigned int)a0 withOptionalDict:(struct __CFDictionary { } *)a1;
- (void)sendAggregatedCallReport;
- (void)sendAggregatedSessionReport;
- (void)sendMessageWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)setAggregatorForClientType:(int)a0 isOneToOneEnabled:(BOOL)a1;
- (void)setupAdaptiveLearningWithParameters:(id)a0;

@end
