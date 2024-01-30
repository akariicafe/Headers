@interface RKMessageClassifier : NSObject

+ (id)preferredLanguages;
+ (void)setPreferredLanguages:(id)a0;
+ (id)messageClassification:(id)a0 withLanguageIdentifier:(id)a1;
+ (id)messageClassification:(id)a0 withLanguageIdentifier:(id)a1 conversationTurns:(id)a2;
+ (BOOL)questionClassification:(id)a0 withLanguageIdentifier:(id)a1;

@end
