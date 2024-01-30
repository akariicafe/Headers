@class CHSpellCheckerErrorModel, AppleSpell;

@interface CHSpellChecker : NSObject {
    AppleSpell *_spellServer;
}

@property (retain, nonatomic) CHSpellCheckerErrorModel *errorModel;

+ (id)sharedSpellServer;
+ (id)newErrorModel;

- (BOOL)isWordInUserDictionaries:(id)a0 caseSensitive:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (id)correctionsForString:(id)a0 shouldUseErrorModel:(BOOL)a1 forLocale:(id)a2;
- (id)topCorrectionForString:(id)a0 contextBeforeToken:(id)a1 contextSeparator:(id)a2 shouldUseErrorModel:(BOOL)a3 forLanguage:(id)a4;

@end
