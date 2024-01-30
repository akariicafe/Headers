@class LPTheme, NSMutableDictionary, NSMutableSet;

@interface LPCSSResolver : NSObject

@property (readonly, nonatomic) NSMutableDictionary *localVariables;
@property (readonly, nonatomic) NSMutableSet *pendingVariables;
@property (readonly, nonatomic) LPTheme *theme;
@property (readonly, nonatomic) BOOL useCSSVariables;
@property (nonatomic) BOOL useInlineStyles;
@property (nonatomic) BOOL useVariablesWhenUsingInlineStyles;
@property (nonatomic) BOOL includeClassNamesWhenUsingInlineStyles;
@property (nonatomic) BOOL includeDarkInterfaceInlineStyles;
@property (nonatomic) BOOL generateEmailCompatibleMarkup;

- (id)components;
- (void).cxx_destruct;
- (id)resolveCSSValue:(id)a0;
- (void)enumerateResolvedRulesFromRuleDictionary:(id)a0 withBlock:(id /* block */)a1;
- (void)buildCSSDeclarationsFromRuleDictionary:(id)a0 withPrefix:(id)a1 suffix:(id)a2 spacer:(id)a3 forBuffer:(id)a4;
- (id)ruleDictionaryForStyle:(id)a0 forComponentClass:(Class)a1 withDarkInterface:(BOOL)a2;
- (void)buildPendingVariableSetForRuleDictionary:(id)a0;
- (id)buildInlineStyleForRuleDictionary:(id)a0;
- (id)initWithTheme:(id)a0;
- (id)buildStyleSheet;
- (void)addStyle:(id)a0 toElement:(id)a1 inComponent:(id)a2;
- (void)setStyle:(id)a0 toElement:(id)a1 inComponent:(id)a2;
- (void)registerAlternateStyle:(id)a0 inComponent:(id)a1;
- (id)localVariablesAsCSSVariables;
- (id)themeVariablesAsCSSVariables;

@end
