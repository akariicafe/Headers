@class NSString;
@protocol FCNewsAppConfigurationManager;

@interface NUArticleResourceURLTranslator : NSObject <NUArticleResourceURLTranslator>

@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)translateFileURLForURL:(id)a0;
- (long long)endpointForScheme:(id)a0;
- (id)defaultURLForEndpoint:(long long)a0;
- (id)initWithAppConfigurationManager:(id)a0;

@end
