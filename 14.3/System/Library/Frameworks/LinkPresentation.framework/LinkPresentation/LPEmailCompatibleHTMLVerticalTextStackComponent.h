@class LPCaptionBarPresentationProperties, LPVerticalTextStackViewStyle;

@interface LPEmailCompatibleHTMLVerticalTextStackComponent : LPHTMLComponent {
    LPVerticalTextStackViewStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)a0;
+ (id)baseRules;

- (void).cxx_destruct;
- (id)componentForRow:(id)a0 style:(id)a1 name:(id)a2;
- (void)buildComponents;
- (id)initWithStyle:(id)a0 presentationProperties:(id)a1 themePath:(id)a2 generator:(id)a3;

@end
