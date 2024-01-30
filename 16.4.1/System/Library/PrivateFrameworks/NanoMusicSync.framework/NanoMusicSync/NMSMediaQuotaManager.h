@class NSDictionary, NSMutableDictionary, NMSMutableMediaDownloadInfo;

@interface NMSMediaQuotaManager : NSObject {
    NSMutableDictionary *_itemEnumerators;
    NSDictionary *_estimatedItemSizes;
    unsigned long long _quota;
    NMSMutableMediaDownloadInfo *_downloadInfoWithinQuota;
    NSDictionary *_downloadInfoWithinQuotaForIdentifiers;
    BOOL _hasEvaluated;
    BOOL _legacy_musicDidSkipItem;
}

- (void).cxx_destruct;
- (void)_evaluateAddedItemsIfNecessary;
- (BOOL)_legacy_musicDidSkipItem;
- (id)_newMutableItemEnumeratorDict;
- (id)downloadInfoWithinQuota;
- (id)downloadInfoWithinQuotaForBundleIdentifier:(id)a0;
- (id)initWithItemEnumerators:(id)a0 estimatedItemSizes:(id)a1 quota:(unsigned long long)a2;

@end
