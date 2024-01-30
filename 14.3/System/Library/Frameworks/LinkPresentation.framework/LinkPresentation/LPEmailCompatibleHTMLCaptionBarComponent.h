@class LPCaptionBarPresentationProperties, LPCaptionBarStyle;

@interface LPEmailCompatibleHTMLCaptionBarComponent : LPHTMLComponent {
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)a0;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)a0;
+ (id)baseRules;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)initWithStyle:(id)a0 presentationProperties:(id)a1 themePath:(id)a2 generator:(id)a3;

@end
