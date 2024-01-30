@class NSString;
@protocol NUAdProvider, NUAdLayoutOptionsFactory, NUAdContextProvider, NUAdMetadataFactory, NUDevice, NUAdControllerFactory;

@interface NUANFArticleAdManagerFactory : NSObject <NUArticleAdManagerFactory>

@property (readonly, nonatomic) id<NUAdProvider> adProvider;
@property (readonly, nonatomic) id<NUAdMetadataFactory> adMetadataFactory;
@property (readonly, nonatomic) id<NUAdControllerFactory> adControllerFactory;
@property (readonly, nonatomic) id<NUDevice> device;
@property (readonly, nonatomic) id<NUAdLayoutOptionsFactory> layoutOptionsFactory;
@property (readonly, nonatomic) id<NUAdContextProvider> subscriptionAdContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createArticleAdManagerForArticle:(id)a0 issue:(id)a1;
- (id)initWithAdProvider:(id)a0 adMetadataFactory:(id)a1 adControllerFactory:(id)a2 device:(id)a3 layoutOptionsFactory:(id)a4 subscriptionAdContextProvider:(id)a5;

@end
