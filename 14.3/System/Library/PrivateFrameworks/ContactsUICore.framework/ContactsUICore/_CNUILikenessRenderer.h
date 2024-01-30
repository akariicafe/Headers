@class NSString;
@protocol CNSchedulerProvider, CNUIPRLikenessResolver;

@interface _CNUILikenessRenderer : NSObject <CNUILikenessRendering>

@property (readonly, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (struct CGImage { } *)cgImageForLikenessProvider:(id)a0 pointSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 style:(unsigned long long)a3 alwaysUsePointSize:(BOOL)a4;
+ (id)renderedLikenessesForProviders:(id)a0 scope:(id)a1;

- (void).cxx_destruct;
- (id)initWithLikenessResolver:(id)a0 schedulerProvider:(id)a1;
- (id)renderedBasicMonogramForString:(id)a0 color:(id)a1 scope:(id)a2 prohibitedSources:(long long)a3;
- (id)renderedBasicMonogramFromString:(id)a0 scope:(id)a1;
- (id)renderedLoadingPlaceholderForContactCount:(unsigned long long)a0 provider:(id)a1 scope:(id)a2;
- (id)loadingPlaceholderForContactCount:(unsigned long long)a0 scope:(id)a1;
- (id)likenessProvidersForContacts:(id)a0 likenessResolverOptions:(id)a1 workScheduler:(id)a2;
- (id)renderedLikenessesForLikenessProviders:(id)a0 scope:(id)a1 likenessFingerprint:(id)a2;
- (id)renderedLikenessesForContacts:(id)a0 scope:(id)a1 workScheduler:(id)a2;

@end
