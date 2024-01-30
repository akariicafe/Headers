@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *okButton;
@property (retain, nonatomic) NSString *alternateButton;
@property (retain, nonatomic) NSString *cancelButton;

+ (id)specifierWithSpecifier:(id)a0;
+ (id)preferenceSpecifierNamed:(id)a0 target:(id)a1 set:(SEL)a2 get:(SEL)a3 detail:(Class)a4 cell:(long long)a5 edit:(Class)a6;

- (BOOL)isDestructive;
- (void)setupWithDictionary:(id)a0;
- (BOOL)isAlternateDestructive;
- (void).cxx_destruct;
- (BOOL)isEqualToSpecifier:(id)a0;

@end
