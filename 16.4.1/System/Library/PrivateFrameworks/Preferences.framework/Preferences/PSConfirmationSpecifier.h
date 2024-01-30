@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *okButton;
@property (retain, nonatomic) NSString *alternateButton;
@property (retain, nonatomic) NSString *cancelButton;

+ (id)preferenceSpecifierNamed:(id)a0 target:(id)a1 set:(SEL)a2 get:(SEL)a3 detail:(Class)a4 cell:(long long)a5 edit:(Class)a6;
+ (id)specifierWithSpecifier:(id)a0;

- (BOOL)isDestructive;
- (BOOL)isAlternateDestructive;
- (void)setupWithDictionary:(id)a0;
- (BOOL)isEqualToSpecifier:(id)a0;
- (void).cxx_destruct;

@end
