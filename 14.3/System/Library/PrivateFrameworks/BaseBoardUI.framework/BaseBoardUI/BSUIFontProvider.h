@interface BSUIFontProvider : NSObject {
    BOOL _isDefault;
}

+ (id)defaultFontProvider;
+ (id)preferredFontProvider;

- (id)preferredFontForTextStyle:(id)a0 hiFontStyle:(long long)a1;
- (id)preferredFontForTextStyle:(id)a0 hiFontStyle:(long long)a1 contentSizeCategory:(id)a2;

@end
