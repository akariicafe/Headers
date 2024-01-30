@class LPCaptionBarPresentationProperties, LPCaptionBarStyle;

@interface LPHTMLCaptionBarComponent : LPHTMLComponent {
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    BOOL _useProgressSpinner;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)a0;
+ (id)baseRules;
+ (id)additionalRulesForStyle:(id)a0;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)initWithStyle:(id)a0 presentationProperties:(id)a1 useProgressSpinner:(BOOL)a2 themePath:(id)a3 generator:(id)a4;

@end
