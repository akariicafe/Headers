@class OCPPackagePart, NSMutableDictionary, NSMutableSet, OAXDrawingState;

@interface OAVReadState : OCXReadState {
    Class mClient;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeTypes;
    NSMutableDictionary *mShapeIdMap;
    NSMutableSet *mDualDrawables;
}

@property (weak) OAXDrawingState *oaxState;

- (Class)client;
- (void).cxx_destruct;
- (unsigned int)officeArtShapeIdWithVmlShapeId:(id)a0;
- (void)setPackagePart:(id)a0;
- (unsigned short)shapeTypeForId:(id)a0;
- (BOOL)isDualDrawable:(id)a0;
- (void)addDualDrawable:(id)a0;
- (id)blipRefForURL:(id)a0;
- (id)drawableForVmlShapeId:(id)a0;
- (id)initWithClient:(Class)a0 packagePart:(id)a1;
- (id)packagePart;
- (void)resetForNewDrawing;
- (void)setDrawable:(id)a0 forVmlShapeId:(id)a1;
- (void)setShapeType:(unsigned short)a0 forId:(id)a1;

@end
