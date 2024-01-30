@class TSWPShapeRep, NSArray, TSKHighlightArrayController, NSString, NSObject;
@protocol TSDContainerInfo, TSKSearchReference;

@interface TSWPTextHostRep : TSDRep <TSDContainerRep, TSWPTextEditingHostRep, TSKHighlightArrayControllerProtocol> {
    TSWPShapeRep *_editingRep;
}

@property (retain, nonatomic) TSKHighlightArrayController *pulseArrayController;
@property (retain, nonatomic) TSKHighlightArrayController *highlightArrayController;
@property (retain, nonatomic) NSObject<TSKSearchReference> *activeSearchReference;
@property (readonly, nonatomic) BOOL useFindOverlayers;
@property (retain, nonatomic) NSArray *searchReferences;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateHighlights;
- (void)dealloc;
- (void)willBeRemoved;
- (id)childReps;
- (void)selectChildRep:(id)a0;
- (id)hitRep:(struct CGPoint { double x0; double x1; })a0;
- (void)addAdditionalChildLayersToArray:(id)a0;
- (BOOL)canSelectChildRep:(id)a0;
- (BOOL)doesRepContainSearchReference:(id)a0;
- (void)drawTextBackground:(struct CGContext { } *)a0 insetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pulsating:(BOOL)a2;
- (id)imageForSearchReference:(id)a0 forPath:(struct CGPath { } *)a1 shouldPulsate:(BOOL)a2;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (id)lineSearchReferencesForSearchReference:(id)a0;
- (struct CGPath { } *)newPathForSearchReference:(id)a0;
- (id)overlayLayers;
- (void)p_activeFindHighlightChangedNotification:(id)a0;
- (void)p_findUIStateChangedNotification:(id)a0;
- (void)p_setActiveSearchReference:(id)a0;
- (void)p_setSearchReferencesToHighlight:(id)a0;
- (void)pulseAnimationDidStop:(id)a0;
- (void)setPulseControllerActive:(BOOL)a0 autohide:(BOOL)a1;
- (void)tswpTextEditingDidEndEditing:(id)a0;
- (void)updateChildrenFromLayout;
- (void)updateFindAnimationWithAnimatingPulse:(BOOL)a0;

@end
