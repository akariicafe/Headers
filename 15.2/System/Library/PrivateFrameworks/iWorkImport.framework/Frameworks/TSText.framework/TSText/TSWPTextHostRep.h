@class TSWPShapeRep, NSArray, NSString, NSObject;
@protocol TSDContainerInfo, TSKSearchReference;

@interface TSWPTextHostRep : TSDRep <TSDContainerRep> {
    TSWPShapeRep *_editingRep;
}

@property (retain, nonatomic) NSObject<TSKSearchReference> *primaryFindResultSearchReference;
@property (readonly, nonatomic) BOOL useFindOverlayers;
@property (retain, nonatomic) NSArray *searchReferences;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBeRemoved;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishInit;
- (id)childReps;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)updateChildrenFromLayout;
- (void)drawTextBackground:(struct CGContext { } *)a0 insetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pulsating:(BOOL)a2;
- (void)drawTextBackground:(struct CGContext { } *)a0 insetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pulsating:(BOOL)a2 shouldTint:(BOOL)a3;

@end
