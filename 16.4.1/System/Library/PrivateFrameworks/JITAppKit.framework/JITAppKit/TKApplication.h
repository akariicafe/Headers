@class TKRepository, NSURL, NSString;
@protocol TKApplicationDelegate;

@interface TKApplication : NSObject

@property (readonly, nonatomic) TKRepository *repository;
@property (copy, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) BOOL ready;
@property (weak, nonatomic) id<TKApplicationDelegate> delegate;

+ (id)shared;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)absoluteURL:(id)a0;
- (void)clearBundleCache;
- (void)didLoadRepository:(id)a0;
- (void)loadBundle:(id)a0 completion:(id /* block */)a1;
- (Class)loadClass:(id)a0;
- (id)loadPage:(id)a0;
- (id)loadPage:(id)a0 withData:(id)a1;
- (id)loadPage:(id)a0 withDataRequest:(id)a1;
- (id)loadPageWithDataRequest:(id)a0;
- (id)loadView:(id)a0;
- (id)newErrorViewController:(id)a0;
- (id)newLoadingViewController;
- (id)viewPathForName:(id)a0;

@end
