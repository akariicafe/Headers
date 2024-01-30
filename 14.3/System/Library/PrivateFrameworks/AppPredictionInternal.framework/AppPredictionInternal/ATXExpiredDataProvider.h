@class ATXHistogramBundleIdTable, _ATXAppInfoManager;

@interface ATXExpiredDataProvider : NSObject <ATXExpiredDataProviderProtocol> {
    _ATXAppInfoManager *_appInfoManager;
    ATXHistogramBundleIdTable *_histogramBundleIdTable;
}

- (id)init;
- (void).cxx_destruct;
- (id)expiredBundleIds;
- (id)expiredActionKeysFromExpiredBundleIds:(id)a0;
- (id)expiredBundleIdsAndActionKeys;
- (id)initWithAppInfoManager:(id)a0 histogramBundleIdTable:(id)a1;

@end
