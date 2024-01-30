@interface CNSocialProfileURLParser : NSObject

+ (id)parseURLStringWithRegularExpressions:(id)a0;
+ (id)parseURLStringByInference:(id)a0;
+ (void)enumerateServiceMatchesForURLString:(id)a0 withBlock:(id /* block */)a1;
+ (id)servicesDictionary;
+ (void)enumerateMatchesWithRegexPattern:(id)a0 inString:(id)a1 withBlock:(id /* block */)a2;
+ (id)parseSocialProfileURL:(id)a0;

@end
