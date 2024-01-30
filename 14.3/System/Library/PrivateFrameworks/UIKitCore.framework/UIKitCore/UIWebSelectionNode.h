@class UIWebSelectionGraph, UIWebSelection;

@interface UIWebSelectionNode : NSObject {
    UIWebSelectionNode *_fromTopByExpanding;
    UIWebSelectionNode *_fromTopByContracting;
    UIWebSelectionNode *_fromBottomByExpanding;
    UIWebSelectionNode *_fromBottomByContracting;
    UIWebSelectionNode *_fromRightByExpanding;
    UIWebSelectionNode *_fromRightByContracting;
    UIWebSelectionNode *_fromLeftByExpanding;
    UIWebSelectionNode *_fromLeftByContracting;
    UIWebSelectionGraph *_sharedGraph;
    BOOL _invalid;
}

@property (retain) UIWebSelection *selection;

- (void)dealloc;
- (id *)nodeByReferenceFromEdge:(int)a0 outwards:(BOOL)a1;
- (id)initWithSelection:(id)a0 inGraph:(id)a1;
- (int)oppositeEdge:(int)a0;
- (id)nodeByMovingEdge:(int)a0 outwards:(BOOL)a1;
- (void)invalidate;

@end
