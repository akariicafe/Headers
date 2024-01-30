@interface IKCSSParser : NSObject

+ (id)parse:(id)a0;
+ (id)parseRulesList:(id)a0;
+ (id)consumeAtRule:(id)a0;
+ (id)consumeComponentValue:(id)a0;
+ (id)consumeDeclaration:(id)a0;
+ (id)consumeDeclarationList:(id)a0;
+ (id)consumeFunction:(id)a0 fromToken:(id)a1;
+ (id)consumeQualifiedRule:(id)a0;
+ (id)consumeRules:(id)a0 topLevel:(BOOL)a1;
+ (id)consumeSimpleBlock:(id)a0 startTokenType:(long long)a1;
+ (id)parseStylesheet:(id)a0;

@end
