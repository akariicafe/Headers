@class NSString, TSTTableStyleNetwork;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel> {
    unsigned long long mIndex;
    TSTTableStyleNetwork *mStyleNetwork;
}

@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)swatchImage;
- (BOOL)isThemeEquivalent:(id)a0;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)p_documentRoot;
- (id)styleNetworkInStylesheet:(id)a0;
- (id)initWithStyleNetwork:(id)a0 index:(unsigned long long)a1;

@end
