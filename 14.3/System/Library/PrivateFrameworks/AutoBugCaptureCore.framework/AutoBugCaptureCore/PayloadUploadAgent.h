@class NWUsageMonitor, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PayloadUploadAgent : NSObject {
    NSObject<OS_dispatch_queue> *_uploadQueue;
    NSMutableDictionary *_pendingUploadMap;
    id _foregroundStateObserver;
    NWUsageMonitor *_usageMonitor;
}

+ (id)sharedInstance;
+ (void)reportFailureMetricForPayload:(id)a0;
+ (BOOL)uploadPayload:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)scheduleUploadFor:(id)a0;
- (void)scheduleUserPermissionRequestFor:(id)a0;
- (void)processPendingUploadRequestFor:(id)a0;
- (void)uploadPayloadsToRadarWithCaseID:(id)a0 radarID:(id)a1 token:(id)a2 urgency:(long long)a3 apnsIdentifier:(unsigned long long)a4;

@end
