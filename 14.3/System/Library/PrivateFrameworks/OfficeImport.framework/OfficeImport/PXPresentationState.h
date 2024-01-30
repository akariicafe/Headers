@class CXNamespace, NSMutableDictionary, OAVReadState, OAXTableStyleCache, PDPresentation, OAXDrawingState;
@protocol TCCancelDelegate;

@interface PXPresentationState : OCXReadState {
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVReadState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
}

@property (retain, nonatomic) id<TCCancelDelegate> cancelDelegate;
@property (readonly, nonatomic) NSMutableDictionary *commentAuthorIdToIndexMap;
@property (retain, nonatomic) CXNamespace *PXPresentationMLNamespace;

+ (void)setPptChartGraphicPropertyDefaultBlock:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)setupNSForXMLFormat:(int)a0;
- (id)tableStyleCache;
- (id)oavState;
- (id)officeArtState;
- (id)tgtPresentation;
- (void)setModelObject:(id)a0 forLocation:(id)a1;
- (void)setTgtPresentation:(id)a0;
- (void)setSlideIndex:(long long)a0 forSlideURL:(id)a1;
- (long long)slideIndexForSlideURL:(id)a0;
- (id)modelObjectForLocation:(id)a0;
- (void)resetOfficeArtState;

@end
