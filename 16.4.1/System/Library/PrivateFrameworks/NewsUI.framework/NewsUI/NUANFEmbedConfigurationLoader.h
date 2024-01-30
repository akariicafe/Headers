@class NSString, FCFlintResourceManager, SXJSONDictionary, FCAsyncOnceOperation;
@protocol FCNewsAppConfigurationManager;

@interface NUANFEmbedConfigurationLoader : NSObject <NUEmbedConfigurationLoader>

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (retain, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation;
@property (readonly, nonatomic) SXJSONDictionary *embedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
