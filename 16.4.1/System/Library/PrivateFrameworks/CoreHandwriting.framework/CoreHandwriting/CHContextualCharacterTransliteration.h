@class NSString, NSArray, NSCharacterSet;

@interface CHContextualCharacterTransliteration : NSObject

@property (readonly, copy, nonatomic) NSString *confusion;
@property (readonly, copy, nonatomic) NSString *correction;
@property (readonly, nonatomic) NSArray *locales;
@property (readonly, nonatomic) NSCharacterSet *requiredLeftContext;
@property (readonly, nonatomic) NSCharacterSet *requiredRightContext;
@property (readonly, nonatomic) BOOL requiresLexiconMatch;

- (void).cxx_destruct;
- (id)initWithConfusion:(id)a0 correction:(id)a1 locales:(id)a2 leftContext:(id)a3 rightContext:(id)a4 requiresLexiconMatch:(BOOL)a5;
- (BOOL)isValidForLocale:(id)a0;
- (BOOL)meetsContextRequirementWithLeftContext:(id)a0 rightContext:(id)a1;

@end
