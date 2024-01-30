@class NSString, TSTTableStyleNetwork;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel> {
    TSTTableStyleNetwork *_styleNetwork;
}

@property (nonatomic) unsigned long long tempUpgradePresetID;
@property (readonly, nonatomic) unsigned long long presetID;
@property (copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property (nonatomic) BOOL tableHasStrongOwnership;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needsObjectUUID;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)swatchImage;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)p_documentRoot;
- (void)saveToArchive:(struct TableStylePresetArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; int x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithStyleNetwork:(id)a0;

@end
