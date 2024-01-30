@class NSMutableDictionary, NSOperationQueue, NSObject, ICQQuotaInfoResponse;
@protocol OS_dispatch_queue;

@interface ICQQuotaRequestManager : NSObject {
    NSOperationQueue *_requestQueue;
    NSObject<OS_dispatch_queue> *_quota_info_queue;
    ICQQuotaInfoResponse *_quotaInfo;
    BOOL _quotaInfoIsDetailed;
    NSMutableDictionary *_appDetailsCache;
}

+ (id)sharedManager;
+ (id)noAccountError;

- (id)init;
- (void).cxx_destruct;
- (void)getQuotaInfoDetailed:(BOOL)a0 handler:(id /* block */)a1;
- (id)_sendSynchronousAARequest:(id)a0;
- (id)appDetailsForBundleIDs:(id)a0 error:(id *)a1;
- (void)clearCachedAppDetails;
- (void)clearCachedQuotaInfo;
- (void)getAppDetailsForBundleIDs:(id)a0 handler:(id /* block */)a1;
- (void)noteQuotaInfoChanged;
- (id)quotaInfoDetailed:(BOOL)a0 error:(id *)a1;

@end
