@interface INUIImageServiceConnection : NSObject

+ (id)sharedConnection;

- (void)loadUIImageForINImage:(id)a0 traitCollection:(id)a1 reply:(id /* block */)a2;

@end
