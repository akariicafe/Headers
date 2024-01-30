@class ATXHistogramBundleIdTable, _ATXAppInfoManager;

@interface ATXExpiredDataProvider : NSObject <ATXExpiredDataProviderProtocol> {
    _ATXAppInfoManager *_appInfoManager;
    ATXHistogramBundleIdTable *_histogramBundleIdTable;
}

- (void).cxx_destruct;
- (id)init;
- (id)expiredBundleIds;
- (id)expiredActionKeysFromExpiredBundleIds:(id)a0;
- (id)expiredBundleIdsAndActionKeys;
- (id)initWithAppInfoManager:(id)a0 histogramBundleIdTable:(id)a1;

@end
