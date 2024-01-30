@interface MarrsSiriNLUTypesUtils : NSObject

+ (id)emptyResponse;
+ (id)QRTokenFromTokenValue:(id)a0;
+ (BOOL)isRequestEmpty:(id)a0;
+ (id)firstRewriteHypothesisOfResponse:(id)a0;
+ (id)firstRewrittenUtteranceOfResponse:(id)a0;
+ (id)firstRewrittenUtteranceOfResponse:(id)a0 WithDefaultValue:(id)a1;
+ (id)firstUtteranceOfRequest:(id)a0;
+ (id)firstUtteranceOfRequest:(id)a0 WithDefaultValue:(id)a1;
+ (id)interactionFromTokenValues:(id)a0 responseTokenValues:(id)a1 utteranceString:(id)a2 locale:(id)a3;
+ (id)internalTokenFromTokenValue:(id)a0 cleanValue:(id)a1 normalizedValues:(id)a2 isSignificant:(BOOL)a3 isWhitespace:(BOOL)a4;
+ (BOOL)isResponseEmpty:(id)a0;
+ (id)requestFromMdfDictionary:(id)a0 turnsKey:(id)a1 tokensKey:(id)a2 utteranceKey:(id)a3 valueKey:(id)a4 siriResponseKey:(id)a5 locale:(id)a6;
+ (id)utteranceFromTokenValues:(id)a0 utteranceString:(id)a1;

@end
