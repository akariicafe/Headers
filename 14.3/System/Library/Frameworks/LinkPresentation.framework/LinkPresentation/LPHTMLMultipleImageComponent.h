@class LPImageViewStyle, NSString, NSArray;

@interface LPHTMLMultipleImageComponent : LPHTMLComponent {
    LPImageViewStyle *_style;
    NSString *_themePath;
    NSArray *_images;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)a0;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)a0;
+ (id)additionalGlobalOutOfLineStyleDeclarations;
+ (id)baseRules;
+ (id)additionalRulesForStyle:(id)a0;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)initWithImages:(id)a0 style:(id)a1 themePath:(id)a2 generator:(id)a3 constrainHeight:(BOOL)a4;
- (void)_computeRowAndColumnSpecificationsForImages:(id)a0;

@end
