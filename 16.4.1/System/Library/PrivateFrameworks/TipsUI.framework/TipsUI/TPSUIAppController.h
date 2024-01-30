@interface TPSUIAppController : TPSAppController {
    void /* unknown type, empty encoding */ syncQueue;
    void /* unknown type, empty encoding */ attributedStringCache;
    void /* unknown type, empty encoding */ footnoteAttributedStringCache;
}

@property (class, nonatomic, readonly) TPSUIAppController *shared;

@property (nonatomic) void /* unknown type, empty encoding */ viewNavigationCollapsed;

+ (id)sharedInstance;

- (void)overrideWidgetWithTip:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)contentWillUpdate;
- (id)assetConfigurationForAssets:(id)a0 language:(id)a1 sizeClass:(long long)a2 style:(long long)a3 assetFileInfoManager:(id)a4;
- (id)attributedStringForIdentifier:(id)a0;
- (id)footNoteAttributedStringForIdentifier:(id)a0;
- (void)resetAttributedStringCache;
- (void)updateAttributedString:(id)a0 forIdentifier:(id)a1;
- (void)updateFootnoteAttributedString:(id)a0 forIdentifier:(id)a1;

@end
