@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (id)initWithPath:(id)a0;
- (BOOL)load;
- (id)bundle;
- (void)dealloc;
- (Class)viewFactory;

@end
