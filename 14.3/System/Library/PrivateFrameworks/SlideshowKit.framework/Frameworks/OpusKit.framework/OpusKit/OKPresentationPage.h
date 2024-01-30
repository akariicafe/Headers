@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKPresentationPage : OKPresentationCanvas {
    NSString *_templateName;
    NSString *_internalNavigatorName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSMutableArray *_internalWidgets;
}

@property (copy, nonatomic) NSString *navigatorName;
@property (readonly, copy, nonatomic) NSMutableArray *widgets;

+ (id)pageWithName:(id)a0 templateName:(id)a1 navigatorName:(id)a2 properties:(id)a3 settings:(id)a4 userData:(id)a5 widgets:(id)a6;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (void)dealloc;
- (id)navigator;
- (void)resolveIfNeeded;
- (id)canvasWithName:(id)a0;
- (id)initWithDictionary:(id)a0 andName:(id)a1 forPresentation:(id)a2 andParent:(id)a3;
- (id)widgetWithName:(id)a0;
- (id)parentNavigator;
- (id)pageTemplate;

@end
