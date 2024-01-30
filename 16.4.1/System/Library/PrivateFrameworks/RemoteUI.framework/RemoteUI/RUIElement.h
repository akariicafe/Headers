@class NSString, NSMutableDictionary, RUIStyle;

@interface RUIElement : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSMutableDictionary *attributes;
@property (retain, nonatomic) RUIStyle *style;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) BOOL enabled;
@property (readonly, weak, nonatomic) RUIElement *parent;
@property (nonatomic) BOOL wantsInlineActivityIndicator;

- (BOOL)hasImage;
- (id)sourceURL;
- (BOOL)loadImage;
- (void)setImage:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)mutableAttributes;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureView:(id)a0;
- (void)setImageAlignment:(int)a0;
- (void)performAction:(int)a0 completion:(id /* block */)a1;
- (void)populatePostbackDictionary:(id)a0;
- (id)viewForElementIdentifier:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (void)stopActivityIndicator;
- (id)staticFunctions;
- (struct OpaqueJSValue { } *)JSValueForContext:(struct OpaqueJSContext { } *)a0;
- (BOOL)loadSystemImage;
- (id)URLAttributeForImageName:(id)a0 getScale:(double *)a1;
- (struct OpaqueJSClass { } *)_JSClass;
- (int)_horizontalAlignmentForString:(id)a0;
- (id)_ruielement_staticFunctions;
- (id)_ruielement_staticValues;
- (id)_symbolConfigurationWithRenderingMode:(id)a0;
- (id)image:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)imageLoaded:(id)a0;
- (BOOL)loadImageFromImageURL;
- (void)pageDidChange;
- (id)pageElement;
- (void)performAction:(int)a0 forElement:(id)a1 completion:(id /* block */)a2;
- (void)startActivityIndicator;
- (id)staticValues;
- (id)subElementWithID:(id)a0;
- (id)subElementsWithName:(id)a0;
- (id)systemImageNamed:(id)a0 symbolRenderingMode:(id)a1;
- (id)textStyleWithString:(id)a0;

@end
