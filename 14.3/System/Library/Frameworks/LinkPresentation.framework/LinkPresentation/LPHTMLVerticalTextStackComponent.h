@class LPCaptionBarPresentationProperties, LPVerticalTextStackViewStyle;

@interface LPHTMLVerticalTextStackComponent : LPHTMLComponent {
    LPVerticalTextStackViewStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)a0;
+ (id)baseRules;
+ (id)additionalRulesForStyle:(id)a0;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)initWithStyle:(id)a0 presentationProperties:(id)a1 themePath:(id)a2 generator:(id)a3;
- (id)componentForRow:(id)a0 style:(id)a1 name:(id)a2 firstLineLeading:(double)a3;

@end
