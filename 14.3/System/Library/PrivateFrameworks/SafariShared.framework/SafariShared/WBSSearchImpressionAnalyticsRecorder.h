@class NSArray, WBSSearchProvider;

@interface WBSSearchImpressionAnalyticsRecorder : NSObject

@property (class, readonly, nonatomic) WBSSearchImpressionAnalyticsRecorder *sharedRecorder;

@property (copy, nonatomic) NSArray *searchProviders;
@property (retain, nonatomic) WBSSearchProvider *defaultSearchProvider;

- (id)init;
- (void).cxx_destruct;
- (id)searchProviderForURL:(id)a0;
- (void)didActualizeImpressionForURL:(id)a0 provenance:(long long)a1;

@end
