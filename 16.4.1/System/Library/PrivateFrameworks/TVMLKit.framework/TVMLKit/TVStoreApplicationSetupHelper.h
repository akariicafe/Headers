@class NSURL, IKURLBagCache;

@interface TVStoreApplicationSetupHelper : NSObject

@property (copy, nonatomic) NSURL *defaultBootURL;
@property (readonly, nonatomic) IKURLBagCache *bagCache;

+ (id)fallbackBootURL;
+ (id)_parsedQueryParametersForURL:(id)a0;
+ (id)bootURLWithBagBootURL:(id)a0 defaultBootURL:(id)a1;
+ (id)defaultBagBootLaunchContextWithOptions:(id)a0 useCache:(BOOL)a1;
+ (id)launchContextWithLaunchOptions:(id)a0 bagBootURLKey:(id)a1 useCache:(BOOL)a2;
+ (id)launchContextWithLaunchOptions:(id)a0 bootURL:(id)a1;
+ (id)launchContextWithLaunchOptions:(id)a0 bootURL:(id)a1 appLocalBootURL:(id)a2;
+ (id)launchContextWithLaunchOptions:(id)a0 bootURL:(id)a1 bagBootURLKey:(id)a2 useCache:(BOOL)a3;
+ (id)launchContextWithLaunchOptions:(id)a0 bootURL:(id)a1 useCache:(BOOL)a2;
+ (id)preferredBootURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultBootURL:(id)a0;
- (id)initWithDefaultBootURL:(id)a0 bagCache:(id)a1;
- (void)obtainBootURLWithCompletion:(id /* block */)a0;

@end
