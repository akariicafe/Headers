@class ATXHistogramBundleIdTable, _ATXAppInfoManager;

@interface ATXExpiredDataProvider : NSObject <ATXExpiredDataProviderProtocol> {
    _ATXAppInfoManager *_appInfoManager;
    ATXHistogramBundleIdTable *_histogramBundleIdTable;
}

- (id)init;
- (void).cxx_destruct;
- (id)expiredActionKeysFromExpiredBundleIds:(id)a0;
- (id)expiredBundleIds;
- (id)expiredBundleIdsAndActionKeys;
- (id)initWithAppInfoManager:(id)a0 histogramBundleIdTable:(id)a1;

@end
