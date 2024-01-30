@class CHSpellCheckerErrorModel, AppleSpell;

@interface CHSpellChecker : NSObject {
    AppleSpell *_spellServer;
}

@property (retain, nonatomic) CHSpellCheckerErrorModel *errorModel;

+ (id)newErrorModel;
+ (id)sharedSpellServer;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isWordInUserDictionaries:(id)a0 caseSensitive:(BOOL)a1;
- (id)correctionsForString:(id)a0 shouldUseErrorModel:(BOOL)a1 forLocale:(id)a2;
- (id)topCorrectionForString:(id)a0 contextBeforeToken:(id)a1 contextSeparator:(id)a2 shouldUseErrorModel:(BOOL)a3 forLanguage:(id)a4;

@end
