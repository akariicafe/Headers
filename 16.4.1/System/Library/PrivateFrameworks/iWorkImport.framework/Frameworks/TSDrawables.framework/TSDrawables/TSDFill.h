@class NSString, TSUColor;

@interface TSDFill : NSObject <TSSPropertyCommandSerializing, TSSPropertyValueArchiving, TSDPathPainter, TSSPreset>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) BOOL isClear;
@property (readonly, nonatomic) BOOL drawsInOneStep;
@property (readonly, nonatomic) BOOL isNearlyWhite;
@property (readonly, nonatomic) TSUColor *referenceColor;
@property (readonly, nonatomic) TSUColor *referenceColorForFontArchiving;
@property (readonly, nonatomic) long long fillType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *presetKind;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)drawablesSpecificInstanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (void)registerSubclass:(Class)a0;
+ (id)p_subclassRegistry;

- (void)paintPath:(const struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)paintPath:(const struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 archiver:(id)a1;
- (BOOL)requiresOutlineOnBackgroundWithAppearance:(unsigned long long)a0;

@end
