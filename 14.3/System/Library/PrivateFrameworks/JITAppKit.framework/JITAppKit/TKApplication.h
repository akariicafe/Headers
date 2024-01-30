@class TKRepository, NSURL, NSString;
@protocol TKApplicationDelegate;

@interface TKApplication : NSObject

@property (readonly, nonatomic) TKRepository *repository;
@property (copy, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) BOOL ready;
@property (weak, nonatomic) id<TKApplicationDelegate> delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shared;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)absoluteURL:(id)a0;
- (id)loadPageWithDataRequest:(id)a0;
- (id)loadPage:(id)a0 withData:(id)a1;
- (id)loadPage:(id)a0 withDataRequest:(id)a1;
- (id)loadView:(id)a0;
- (Class)loadClass:(id)a0;
- (id)loadPage:(id)a0;
- (id)newErrorViewController:(id)a0;
- (id)viewPathForName:(id)a0;
- (void)loadBundle:(id)a0 completion:(id /* block */)a1;
- (id)newLoadingViewController;
- (void)didLoadRepository:(id)a0;
- (void)clearBundleCache;

@end
