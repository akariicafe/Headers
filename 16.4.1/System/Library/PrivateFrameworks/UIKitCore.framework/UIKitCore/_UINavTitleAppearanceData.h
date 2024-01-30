@class NSDictionary, _UINavigationBarTitleFontProvider;

@interface _UINavTitleAppearanceData : _UIBarAppearanceData {
    NSDictionary *_titleTextAttributes;
    NSDictionary *_largeTitleTextAttributes;
    struct UIOffset { double horizontal; double vertical; } _titlePositionAdjustment;
    _UINavigationBarTitleFontProvider *_titleFontProvider;
    long long _titleFontProviderIdiom;
}

@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset { double x0; double x1; } titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;

+ (id)standardTitleDataForIdiom:(long long)a0;
+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (void)describeInto:(id)a0;
- (long long)hashInto:(long long)a0;
- (id)replicate;
- (BOOL)checkEqualTo:(id)a0;
- (void).cxx_destruct;

@end
