@interface TSWPUserDefaults : NSObject

+ (id)invisiblesColor;
+ (BOOL)p_UserDefaultSet:(id)a0 force:(BOOL)a1;
+ (void)setAutomaticallyDetectLinks:(BOOL)a0;
+ (void)setAutomaticallyDetectLists:(BOOL)a0;
+ (void)setSuperscriptNumericalSuffixes:(BOOL)a0;
+ (void)setSpellCheckingEnabled:(BOOL)a0;
+ (BOOL)automaticallyDetectLinks;
+ (BOOL)automaticallyDetectLists;
+ (BOOL)superscriptNumericalSuffixes;
+ (BOOL)spellCheckingEnabled;
+ (void)setInvisiblesColor:(id)a0;
+ (void)registerUserDefaults:(BOOL)a0;

@end
