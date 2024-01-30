@interface WLKConfigurationRequest : NSObject

+ (void)_fetchV3WithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 sessionConfiguration:(id)a2 queryParameters:(id)a3 completion:(id /* block */)a4;
+ (void)fetchWithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 sessionConfiguration:(id)a2 queryParameters:(id)a3 fileStorage:(id)a4 completion:(id /* block */)a5;
+ (void)_fetchV3WithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 sessionConfiguration:(id)a2 queryParameters:(id)a3 fileStorage:(id)a4 completion:(id /* block */)a5;
+ (id)_configURLString:(id *)a0;

@end
