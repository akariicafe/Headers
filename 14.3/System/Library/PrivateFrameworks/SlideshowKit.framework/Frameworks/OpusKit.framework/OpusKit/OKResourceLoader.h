@interface OKResourceLoader : NSObject

+ (id)resourceLoader;

- (BOOL)canLoadResourceWithURL:(id)a0;
- (id)loadResourceWithURL:(id)a0 withPresentationViewController:(id)a1;
- (id)copyResource:(id)a0;
- (void)deleteResource:(id)a0;

@end
