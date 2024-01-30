@interface MDMDeclarativeManagement : NSObject

+ (void)fetchDataAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_createUnsupportedFeatureError;
+ (void)executeRequestForEndpoint:(id)a0 requestData:(id)a1 completionHandler:(id /* block */)a2;

@end
