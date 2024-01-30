@class LPTheme, NSMutableDictionary;

@interface LPCSSResolver : NSObject

@property (readonly, nonatomic) NSMutableDictionary *localVariables;
@property (readonly, nonatomic) LPTheme *theme;

- (void).cxx_destruct;
- (void)addStyle:(id)a0 toElement:(id)a1 inComponent:(id)a2;
- (void)enumerateResolvedRulesFromRuleDictionary:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithTheme:(id)a0;
- (id)resolveCSSValue:(id)a0;
- (id)ruleDictionaryForStyle:(id)a0 forComponentClass:(Class)a1;

@end
