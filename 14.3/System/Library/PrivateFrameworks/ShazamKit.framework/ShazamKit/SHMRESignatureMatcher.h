@class MRE, NSString, SHLocalStore;
@protocol SHMatcherDelegate;

@interface SHMRESignatureMatcher : NSObject <SHMatcher>

@property (retain, nonatomic) MRE *mre;
@property (retain, nonatomic) SHLocalStore *localStore;
@property (weak, nonatomic) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLocalStore:(id)a0;
- (void)buildMRE;
- (void)matchSignature:(id)a0;
- (id)MRESignaturesFromMatches:(id)a0;
- (long long)storeDensityToMREDensity:(long long)a0;
- (id)mediaItemsFromMREResult:(id)a0;

@end
