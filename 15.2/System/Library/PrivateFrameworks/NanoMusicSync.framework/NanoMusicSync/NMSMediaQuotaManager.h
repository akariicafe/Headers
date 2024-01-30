@class NSDictionary, NMSMediaDownloadInfo;

@interface NMSMediaQuotaManager : NSObject {
    NSDictionary *_groupIterators;
    unsigned long long _quota;
    NMSMediaDownloadInfo *_downloadInfoWithinQuota;
    unsigned long long _quotaUsage;
    BOOL _hasEvaluated;
}

- (void).cxx_destruct;
- (void)_evaluateAddedItemsIfNecessary;
- (id)_containerListForBundleIdentifier:(id)a0;
- (id)downloadInfoWithinQuota;
- (id)initWithGroupIterators:(id)a0 quota:(unsigned long long)a1;
- (id)groupIteratorForBundleIdentifier:(id)a0;
- (id)downloadInfoWithinQuotaForBundleIdentifier:(id)a0;
- (unsigned long long)sizeOfItemsWithinQuota;
- (unsigned long long)sizeOfItemsWithinQuotaForBundleIdentifier:(id)a0;
- (unsigned long long)sizeOfNominatedItemsForBundleIdentifier:(id)a0;
- (BOOL)isItemGroupWithinQuota:(id)a0;

@end
