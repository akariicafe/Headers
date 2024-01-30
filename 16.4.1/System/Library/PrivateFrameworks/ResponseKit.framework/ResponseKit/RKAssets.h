@interface RKAssets : NSObject

+ (id)synonyms;
+ (id)localizedStrings;
+ (id)constantClasses;
+ (id)alternativeInversions;
+ (id)appreciationKeywords;
+ (id)categoryKeywordMap;
+ (id)contractedResponses;
+ (id)fixedPhrases;
+ (id)momentsPhrases;
+ (id)polarTagKeywords;
+ (id)sensitiveSubjectRegularExpressionPatterns;

- (id)init;
- (id)initWithPlistURL:(id)a0;

@end
