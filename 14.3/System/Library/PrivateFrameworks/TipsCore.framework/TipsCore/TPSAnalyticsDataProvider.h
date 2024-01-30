@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) id<TPSAnalyticsDataProviderDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (id)bundleIDForIdentifier:(id)a0;
- (id)experimentCampID;
- (void).cxx_destruct;
- (id)displayTypeForIdentifier:(id)a0;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)a0;
- (id)experimentID;
- (id)contextForIdentifier:(id)a0;
- (id)deliveryInfoVersion;

@end
