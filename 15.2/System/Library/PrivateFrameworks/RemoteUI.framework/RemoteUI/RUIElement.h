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

- (id)sourceURL;
- (id)mutableAttributes;
- (void).cxx_destruct;
- (id)init;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasImage;
- (void)dealloc;
- (void)setImage:(id)a0;
- (BOOL)loadImage;
- (void)performAction:(int)a0 completion:(id /* block */)a1;
- (void)setImageAlignment:(int)a0;
- (void)populatePostbackDictionary:(id)a0;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;
- (id)viewForElementIdentifier:(id)a0;
- (id)subElementWithID:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (id)pageElement;
- (void)configureView:(id)a0;
- (id)_ruielement_staticValues;
- (id)staticValues;
- (id)_ruielement_staticFunctions;
- (id)staticFunctions;
- (struct OpaqueJSClass { } *)_JSClass;
- (struct OpaqueJSValue { } *)JSValueForContext:(struct OpaqueJSContext { } *)a0;
- (void)performAction:(int)a0 forElement:(id)a1 completion:(id /* block */)a2;
- (id)subElementsWithName:(id)a0;
- (id)URLAttributeForImageName:(id)a0 getScale:(double *)a1;
- (BOOL)loadSystemImage;
- (BOOL)loadImageFromImageURL;
- (id)image:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (int)_horizontalAlignmentForString:(id)a0;
- (void)imageLoaded:(id)a0;

@end
