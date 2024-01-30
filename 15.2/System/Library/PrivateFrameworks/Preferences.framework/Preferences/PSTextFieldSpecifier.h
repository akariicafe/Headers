@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier {
    SEL bestGuess;
    NSString *_placeholder;
}

+ (id)specifierWithSpecifier:(id)a0;
+ (id)preferenceSpecifierNamed:(id)a0 target:(id)a1 set:(SEL)a2 get:(SEL)a3 detail:(Class)a4 cell:(long long)a5 edit:(Class)a6;

- (id)placeholder;
- (void).cxx_destruct;
- (BOOL)isEqualToSpecifier:(id)a0;
- (void)setPlaceholder:(id)a0;

@end
