@class OAVReadState, CXNamespace, OCPPackagePart, OAXTableStyleCache, OADBlipCollection, NSMutableDictionary, OADColorScheme, OADStyleMatrix, NSMutableArray, OADColorMap, OADFontScheme, OAXClient;

@interface OAXDrawingState : OCXReadState {
    OAXClient *mClient;
    OCPPackagePart *mPackagePart;
    OADStyleMatrix *mStyleMatrix;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mDrawableIdToVmlShapeIdMap;
    OADBlipCollection *mTgtBlipCollection;
    NSMutableArray *mTgtBulletBlips;
    OAVReadState *mOavState;
    OADColorScheme *mColorScheme;
    OADColorMap *mColorMap;
    OADFontScheme *mFontScheme;
    NSMutableArray *mGroupStack;
}

@property (weak) id documentState;
@property (retain, nonatomic) NSMutableDictionary *sourceURLToTargetBlipIndexMap;
@property (retain, nonatomic) NSMutableDictionary *sourceURLToTargetBulletBlipIndexMap;
@property (retain, nonatomic) CXNamespace *OAXMainNamespace;
@property (retain, nonatomic) CXNamespace *OAXChartNamespace;
@property (retain, nonatomic) CXNamespace *OAXChartDrawingNamespace;
@property (retain, nonatomic) CXNamespace *OAXCompatNamespace;
@property (retain, nonatomic) CXNamespace *OAXLockedCanvasNamespace;
@property (retain, nonatomic) CXNamespace *OAXPictureNamespace;
@property (retain, nonatomic) CXNamespace *OAXTableNamespace;
@property (retain, nonatomic) CXNamespace *OAXWordProcessingMLNamespace;
@property (retain, nonatomic) CXNamespace *OAXDrawing2010Namespace;
@property (retain, nonatomic) CXNamespace *OAXChart2012Namespace;
@property (retain, nonatomic) CXNamespace *OAXMathNamespace;
@property (copy, nonatomic) id /* block */ clientChartGraphicPropertyDefaultsBlock;

- (void)setColorMap:(id)a0;
- (id)initWithClient:(id)a0;
- (id)client;
- (void)setColorScheme:(id)a0;
- (id)colorScheme;
- (id)appVersion;
- (void).cxx_destruct;
- (id)init;
- (id)colorMap;
- (void)pushGroup:(id)a0;
- (id)styleMatrix;
- (id)fontScheme;
- (id)packagePart;
- (void)setupNSForXMLFormat:(int)a0;
- (id)blipRefWithURL:(id)a0 blipArray:(id)a1 blipURLtoIndexMap:(id)a2;
- (id)peekGroup;
- (void)setPackagePart:(id)a0;
- (void)setStyleMatrix:(id)a0;
- (id)tableStyleCache;
- (void)setTableStyleCache:(id)a0;
- (id)drawableForShapeId:(unsigned int)a0;
- (void)setDrawable:(id)a0 forShapeId:(unsigned int)a1;
- (id)vmlShapeIdForDrawableId:(unsigned int)a0;
- (void)setVmlShapeId:(id)a0 forDrawableId:(unsigned int)a1;
- (void)resetForNewDrawing;
- (id)oavState;
- (void)setOavState:(id)a0;
- (void)setFontScheme:(id)a0;
- (id)targetBlipCollection;
- (void)clearTargetBlipCollection;
- (void)setTargetBlipCollection:(id)a0;
- (void)setTargetBulletBlipArray:(id)a0;
- (id)blipRefForURL:(id)a0;
- (id)bulletBlipRefForURL:(id)a0;
- (id)popGroup;
- (BOOL)isInsideGroup;
- (void)replaceGroupStack:(id)a0;

@end
