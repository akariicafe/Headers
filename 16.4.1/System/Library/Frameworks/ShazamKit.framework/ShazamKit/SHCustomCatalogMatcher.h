@class MRE, SHCustomCatalog, NSString, SHCustomCatalogMatcherResultBuilder;
@protocol SHMatcherDelegate;

@interface SHCustomCatalogMatcher : NSObject <SHMatcher>

@property (retain, nonatomic) MRE *mre;
@property (readonly, nonatomic) SHCustomCatalog *customCatalog;
@property (readonly, nonatomic) SHCustomCatalogMatcherResultBuilder *matchResultBuilder;
@property (weak, nonatomic) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)matchSignature:(id)a0;
- (void).cxx_destruct;
- (void)stopRecognition;
- (id)MRESignaturesFromMatches:(id)a0;
- (long long)algorithmToMREAlgorithm:(long long)a0;
- (id)bestMatchFromMatchedResults:(id)a0;
- (void)buildMRE;
- (id)initWithCustomCatalog:(id)a0;
- (BOOL)shouldTrackQuerySignature:(id)a0;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;
- (long long)storeDensityToMREDensity:(long long)a0;
- (id)stringIDFromTrackID:(unsigned long long)a0;

@end
