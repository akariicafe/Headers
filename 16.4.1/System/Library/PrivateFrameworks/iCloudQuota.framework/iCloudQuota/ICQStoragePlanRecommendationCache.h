@class NSNumber, NSDate;

@interface ICQStoragePlanRecommendationCache : NSObject {
    NSNumber *_extraQuotaNeeded;
    NSDate *_expiry;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)extraQuotaNeeded;
- (void)setExtraQuotaNeeded:(id)a0 expiry:(id)a1;

@end
