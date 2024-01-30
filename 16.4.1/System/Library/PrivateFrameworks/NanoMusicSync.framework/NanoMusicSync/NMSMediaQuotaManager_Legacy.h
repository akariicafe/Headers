@class NSDictionary, NMSMediaDownloadInfo;

@interface NMSMediaQuotaManager_Legacy : NSObject {
    NSDictionary *_groupIterators;
    unsigned long long _quota;
    NMSMediaDownloadInfo *_downloadInfoWithinQuota;
    unsigned long long _quotaUsage;
    BOOL _hasEvaluated;
}

- (void).cxx_destruct;
- (id)_containerListForBundleIdentifier:(id)a0;
- (void)_evaluateAddedItemsIfNecessary;
- (id)downloadInfoWithinQuota;
- (id)downloadInfoWithinQuotaForBundleIdentifier:(id)a0;
- (id)groupIteratorForBundleIdentifier:(id)a0;
- (id)initWithGroupIterators:(id)a0 quota:(unsigned long long)a1;
- (BOOL)isItemGroupWithinQuota:(id)a0;
- (unsigned long long)sizeOfItemsWithinQuota;
- (unsigned long long)sizeOfItemsWithinQuotaForBundleIdentifier:(id)a0;
- (unsigned long long)sizeOfNominatedItemsForBundleIdentifier:(id)a0;

@end
