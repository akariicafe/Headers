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

- (void).cxx_destruct;
- (id)init;
- (void)getQuotaInfoDetailed:(BOOL)a0 handler:(id /* block */)a1;
- (void)noteQuotaInfoChanged;
- (void)getAppDetailsForBundleIDs:(id)a0 handler:(id /* block */)a1;
- (void)clearCachedQuotaInfo;
- (id)_sendSynchronousAARequest:(id)a0;
- (id)quotaInfoDetailed:(BOOL)a0 error:(id *)a1;
- (id)appDetailsForBundleIDs:(id)a0 error:(id *)a1;
- (void)clearCachedAppDetails;

@end
