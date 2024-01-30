@interface SHSystemService : NSObject

+ (id)proxyConnection;
+ (void)fetchShazamModuleEnabledStateWithCompletion:(id /* block */)a0;
+ (void)enableShazamModuleWithCompletion:(id /* block */)a0;

@end
