@interface MDMDeclarativeManagement : NSObject

+ (id)_createUnsupportedFeatureError;
+ (void)executeRequestForEndpoint:(id)a0 channelType:(unsigned long long)a1 requestData:(id)a2 completionHandler:(id /* block */)a3;
+ (void)fetchDataAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end
