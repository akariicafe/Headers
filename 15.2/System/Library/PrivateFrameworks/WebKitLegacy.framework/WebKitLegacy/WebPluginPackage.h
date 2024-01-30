@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (id)initWithPath:(id)a0;
- (id)bundle;
- (BOOL)load;
- (void)dealloc;
- (Class)viewFactory;

@end
