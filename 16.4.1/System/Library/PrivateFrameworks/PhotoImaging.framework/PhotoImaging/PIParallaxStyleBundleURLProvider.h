@class NSBundle;

@interface PIParallaxStyleBundleURLProvider : NSObject <PIParallaxStyleURLProvider> {
    NSBundle *_bundle;
}

- (id)init;
- (void).cxx_destruct;
- (id)urlForIdentifier:(id)a0;

@end
