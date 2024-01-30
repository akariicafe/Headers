@class FCIssue, NSString, FCArticle;
@protocol NUAdProvider, NUAdLayoutOptionsFactory, NUAdContextProvider, NUAdMetadataFactory, NUDevice, NUAdControllerFactory;

@interface NUArticleAdManager : NSObject <NUAdContextProvider, SXAdControllerDelegate, SXAdProvider, SXAdControllerFactory>

@property (readonly, nonatomic) FCArticle *article;
@property (readonly, nonatomic) FCIssue *issue;
@property (readonly, nonatomic) id<NUAdProvider> adProvider;
@property (readonly, nonatomic) id<NUAdControllerFactory> adControllerFactory;
@property (readonly, nonatomic) id<NUAdMetadataFactory> adMetadataFactory;
@property (readonly, nonatomic) id<NUDevice> device;
@property (readonly, nonatomic) id<NUAdLayoutOptionsFactory> layoutOptionsFactory;
@property (readonly, nonatomic) id<NUAdContextProvider> subscriptionAdContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)a0;
- (id)contextProvidersForKeyPath:(id)a0;
- (id)adControllerForDocument:(id)a0 viewport:(id)a1;
- (id /* block */)adForRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)adController:(id)a0 componentWithIdentifier:(id)a1 didLoadBannerView:(id)a2;
- (void)adController:(id)a0 componentWithIdentifier:(id)a1 didUnloadBannerView:(id)a2 withError:(id)a3;
- (void)adController:(id)a0 componentWithIdentifier:(id)a1 failedToLoadBannerView:(id)a2 error:(id)a3;
- (id)initWithArticle:(id)a0 issue:(id)a1 adProvider:(id)a2 adControllerFactory:(id)a3 adMetadataFactory:(id)a4 device:(id)a5 layoutOptionsFactory:(id)a6 subscriptionAdContextProvider:(id)a7;

@end
