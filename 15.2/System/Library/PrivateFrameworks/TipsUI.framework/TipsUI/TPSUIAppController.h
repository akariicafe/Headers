@interface TPSUIAppController : TPSAppController {
    void /* unknown type, empty encoding */ syncQueue;
    void /* unknown type, empty encoding */ attributedStringCache;
}

@property (class, nonatomic, readonly) TPSUIAppController *shared;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)contentWillUpdate;
- (id)assetConfigurationForAssets:(id)a0 language:(id)a1 sizeClass:(long long)a2 style:(long long)a3;
- (id)attributedStringForIdentifier:(id)a0;
- (void)updateAttributedString:(id)a0 forIdentifier:(id)a1;
- (void)resetAttributedStringCache;

@end
