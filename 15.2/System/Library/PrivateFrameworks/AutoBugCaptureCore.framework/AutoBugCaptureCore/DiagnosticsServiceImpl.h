@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DiagnosticsServiceImpl : NSObject <NSXPCListenerDelegate, DiagnosticsServiceInterface> {
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *allowanceCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (BOOL)_checkRateLimitForConnection:(id)a0;
- (void)endSession:(id)a0;
- (void)shutdown;
- (void)uploadRecentCases:(unsigned long long)a0;
- (BOOL)assertEntitlement:(id)a0 entitlement:(id)a1 private:(BOOL)a2;
- (void)requestGroupCaseIdentifierForSignature:(id)a0 reply:(id /* block */)a1;
- (void)resetAllWithReply:(id /* block */)a0;
- (void)listCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resetDiagnosticCaseUsageWithReply:(id /* block */)a0;
- (void)cloudKitUploadDecisionForCaseIdentifiers:(id)a0 reply:(id /* block */)a1;
- (id)responseDictWithSuccess:(BOOL)a0 sessionId:(id)a1 groupId:(id)a2 additionalDict:(id)a3 reasonCode:(long long)a4;
- (void)submitRecentCaseSummariesWithCount:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)getExpertSystemsStatus:(id /* block */)a0;
- (void)startSessionWithSignature:(id)a0 duration:(unsigned long long)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(BOOL)a5 reply:(id /* block */)a6;
- (void).cxx_destruct;
- (void)getAutoBugCaptureConfiguration:(id /* block */)a0;
- (void)homeKitResidentDevicesIDSIdentifiersWithReply:(id /* block */)a0;
- (void)snapshotWithSignature:(id)a0 duration:(unsigned long long)a1 events:(id)a2 payload:(id)a3 actions:(id)a4 wantsRemoteCase:(BOOL)a5 reply:(id /* block */)a6;
- (void)submitRecentCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)addSignatureContentForSession:(id)a0 key:(id)a1 content:(id)a2 reply:(id /* block */)a3;
- (void)uploadCasesWithIdentifiersToCloudKit:(id)a0;
- (void)resetDiagnosticCaseStorageWithReply:(id /* block */)a0;
- (void)getCasesListFromIdentifier:(id)a0 count:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)responseDictWithSuccess:(BOOL)a0 sessionId:(id)a1;
- (void)abcEnabledAndReadyWithReply:(id /* block */)a0;
- (BOOL)validateSignature:(id)a0;
- (void)triggerRemoteSessionForSignature:(id)a0 groupIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)addToSession:(id)a0 event:(id)a1 payload:(id)a2 reply:(id /* block */)a3;
- (void)purgeAutoBugCaptureFilesWithSubPaths:(id)a0 reply:(id /* block */)a1;
- (id)responseDictWithSuccess:(BOOL)a0 reasonCode:(long long)a1;
- (void)listCaseSummariesOfType:(id)a0 fromIdentifier:(id)a1 count:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)getDiagnosticPayloadsForSignatures:(id)a0 reply:(id /* block */)a1;
- (BOOL)_checkRateLimitForAllowance:(id)a0 time:(id)a1;
- (void)getSessionStatisticsWithReply:(id /* block */)a0;
- (void)cancelSession:(id)a0;
- (void)addToSession:(id)a0 events:(id)a1 payload:(id)a2 reply:(id /* block */)a3;

@end
