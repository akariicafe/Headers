@class NSDictionary;

@interface _UINavTitleAppearanceData : _UIBarAppearanceData {
    NSDictionary *_titleTextAttributes;
    NSDictionary *_largeTitleTextAttributes;
    struct UIOffset { double horizontal; double vertical; } _titlePositionAdjustment;
}

@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset { double x0; double x1; } titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;

+ (id)standardTitleData;
+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (BOOL)checkEqualTo:(id)a0;
- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (void)describeInto:(id)a0;
- (id)replicate;
- (void).cxx_destruct;
- (long long)hashInto:(long long)a0;

@end
