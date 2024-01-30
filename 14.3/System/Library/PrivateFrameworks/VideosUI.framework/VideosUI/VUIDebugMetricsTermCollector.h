@class NSDictionary, NSArray, NSString;

@interface VUIDebugMetricsTermCollector : NSObject <VUIDebugMetricsTermCollector>

@property (readonly, nonatomic) NSDictionary *primaryTerms;
@property (readonly, nonatomic) NSArray *baseTerms;
@property (readonly, nonatomic) NSArray *metricsKitTerms;
@property (readonly, nonatomic) NSArray *filteredTerms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchTerms;
- (id)pageTerms;
- (id)clickTerms;
- (id)impressionsTerms;
- (id)enterTerms;
- (id)exitTerms;
- (id)accountTerms;
- (id)pageRenderTerms;
- (id)dialogTerms;

@end
