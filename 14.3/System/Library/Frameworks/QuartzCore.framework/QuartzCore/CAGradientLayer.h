@class NSArray, NSString;

@interface CAGradientLayer : CALayer

@property (retain) id colorMap;
@property (copy) NSArray *interpolations;
@property (copy) NSArray *colors;
@property (copy) NSArray *locations;
@property struct CGPoint { double x0; double x1; } startPoint;
@property struct CGPoint { double x0; double x1; } endPoint;
@property (copy) NSString *type;

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)defaultValueForKey:(id)a0;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)_colorSpaceDidChange;
- (struct Layer { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; struct Data { struct Vec4<float> { float x0; float x1; float x2; float x3; } x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5 : 4; unsigned char x6 : 4; unsigned char x7 : 4; unsigned char x8 : 4; unsigned char x9 : 4; unsigned char x10 : 5; unsigned char x11 : 2; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; unsigned char x37 : 1; unsigned char x38 : 1; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; unsigned char x42 : 1; unsigned char x43 : 1; unsigned char x44 : 1; unsigned char x45 : 1; unsigned char x46 : 1; struct Vec2<double> { double x0; double x1; } x47; struct Rect { double x0; double x1; double x2; double x3; } x48; } x2; struct Ref<CA::Render::Object> { struct Object *x0; } x3; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> *x0; } x4; struct Layer *x5; struct Ref<CA::Render::String> { struct String *x0; } x6; struct Ref<CA::Render::Layer::Ext> { struct Ext *x0; } x7; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> *x0; } x8; struct Ref<CA::Render::Handle> { struct Handle *x0; } x9; } *)_copyRenderLayer:(struct Transaction { struct Shared *x0; struct HashTable<CA::Layer *, unsigned int *> *x1; int x2; unsigned int x3; struct Level *x4; struct List<void (^)()> *x5; struct Command *x6; struct Deleted *x7; struct List<const void *> *x8; struct Context *x9; struct HashTable<CA::Layer *, CA::Layer *> *x10; struct __CFRunLoop *x11; struct __CFRunLoopObserver *x12; struct LayoutList *x13; struct List<CA::Layer *> *x14; struct Atomic { struct { int x0; } x0; } x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; } *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)didChangeValueForKey:(id)a0;
- (BOOL)CA_validateValue:(id)a0 forKey:(id)a1;
- (id)implicitAnimationForKeyPath:(id)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;
- (void)_renderBackgroundInContext:(struct CGContext { } *)a0;

@end
