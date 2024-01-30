@interface RKMessageClassifier : NSObject

+ (void)setPreferredLanguages:(id)a0;
+ (id)preferredLanguages;
+ (id)messageClassification:(id)a0 withLanguageIdentifier:(id)a1;
+ (id)messageClassification:(id)a0 withLanguageIdentifier:(id)a1 conversationTurns:(id)a2;
+ (BOOL)questionClassification:(id)a0 withLanguageIdentifier:(id)a1;

@end
