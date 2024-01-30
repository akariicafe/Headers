@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKPresentationWidget : OKPresentationCanvas {
    NSString *_internalName;
    NSString *_internalClassName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSMutableArray *_internalSubWidgets;
    NSMutableArray *_internalMaterials;
}

@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSString *className;
@property (readonly, copy, nonatomic) NSMutableArray *subWidgets;
@property (copy, nonatomic) NSMutableArray *materials;

+ (id)widgetWithName:(id)a0 templateName:(id)a1 className:(id)a2 settings:(id)a3 userData:(id)a4 subWidgets:(id)a5 materials:(id)a6;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (void)dealloc;
- (id)materialWithName:(id)a0;
- (void)resolveIfNeeded;
- (id)parentPage;
- (id)canvasWithName:(id)a0;
- (id)initWithDictionary:(id)a0 forPresentation:(id)a1 andParent:(id)a2;
- (id)subWidgetWithName:(id)a0;
- (id)parentWidget;
- (id)widgetTemplate;

@end
