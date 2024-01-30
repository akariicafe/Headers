@class MRE, NSString, SHCustomCatalog;
@protocol SHMatcherDelegate;

@interface SHCustomCatalogMatcher : NSObject <SHMatcher>

@property (retain, nonatomic) MRE *mre;
@property (retain, nonatomic) SHCustomCatalog *customCatalog;
@property (weak, nonatomic) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startRecognitionForRequest:(id)a0;
- (id)initWithCustomCatalog:(id)a0;
- (void)buildMRE;
- (id)MRESignaturesFromMatches:(id)a0;
- (long long)storeDensityToMREDensity:(long long)a0;
- (id)mediaItemsFromMREResult:(id)a0 audioStartDate:(id)a1;

@end
