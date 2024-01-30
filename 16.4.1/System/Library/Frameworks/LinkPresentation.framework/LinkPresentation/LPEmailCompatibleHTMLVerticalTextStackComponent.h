@class LPCaptionBarPresentationProperties, LPVerticalTextStackViewStyle;

@interface LPEmailCompatibleHTMLVerticalTextStackComponent : LPHTMLComponent {
    LPVerticalTextStackViewStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)baseRules;
+ (id)ruleDictionaryForStyle:(id)a0;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)componentForRow:(id)a0 style:(id)a1 name:(id)a2;
- (id)initWithStyle:(id)a0 presentationProperties:(id)a1 themePath:(id)a2 generator:(id)a3;

@end
