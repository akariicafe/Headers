@interface CKSpellingSubstitutionsDefaults : NSObject

+ (void)setTextAutocapitalization:(long long)a0;
+ (void)setTextAutocorrection:(long long)a0;
+ (void)setSmartQuotes:(long long)a0;
+ (void)setTextSpellingSpellChecking:(long long)a0;
+ (void)setSmartDashes:(long long)a0;
+ (void)setSmartInsertDelete:(long long)a0;
+ (void)setEmojiReplacement:(long long)a0;
+ (long long)textAutocorrection;
+ (long long)textAutocapitalization;
+ (long long)textSpellChecking;
+ (long long)textSmartQuotes;
+ (long long)textSmartDashes;
+ (long long)textSmartInsertDelete;
+ (long long)textEmojiReplacement;

- (id)init;
- (void)_setUpSpellingSubstitutionsDefaults;

@end
