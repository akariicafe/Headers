@class NSString, NSArray, NSCharacterSet;

@interface CHContextualCharacterTransliteration : NSObject

@property (readonly, copy, nonatomic) NSString *confusion;
@property (readonly, copy, nonatomic) NSString *correction;
@property (readonly, retain, nonatomic) NSArray *locales;
@property (readonly, retain, nonatomic) NSCharacterSet *requiredLeftContext;
@property (readonly, retain, nonatomic) NSCharacterSet *requiredRightContext;
@property (readonly, nonatomic) BOOL requiresLexiconMatch;

- (void)dealloc;
- (id)initWithConfusion:(id)a0 correction:(id)a1 locales:(id)a2 leftContext:(id)a3 rightContext:(id)a4 requiresLexiconMatch:(BOOL)a5;
- (BOOL)meetsContextRequirementWithLeftContext:(id)a0 rightContext:(id)a1;
- (BOOL)isValidForLocale:(id)a0;

@end
