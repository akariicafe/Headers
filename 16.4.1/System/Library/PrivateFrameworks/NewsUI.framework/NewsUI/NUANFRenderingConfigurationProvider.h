@class NSString, SXRenderingConfiguration;
@protocol FCNewsAppConfigurationManager;

@interface NUANFRenderingConfigurationProvider : NSObject <SXRenderingConfigurationProvider>

@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly, nonatomic) SXRenderingConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppConfigurationManager:(id)a0;
- (void).cxx_destruct;

@end
