@class SXScrollView, NSString, SXDataTableBlueprint, CALayer, SXDataTableComponentController, SXTangierController, SXDataTableDictionary, SXDataTableView;
@protocol SXComponentController, SXAdIgnorableViewFactory, SXTextComponentLayoutHosting, SXImageViewFactory, SXComponentActionHandler;

@interface SXDataTableComponentView : SXComponentView <SXDataTableViewDataSource, SXTangierControllerDelegate, SXViewportChangeListener, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) id<SXImageViewFactory> imageViewFactory;
@property (readonly, nonatomic) id<SXComponentActionHandler> componentActionHandler;
@property (readonly, weak, nonatomic) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;
@property (readonly, weak, nonatomic) id<SXComponentController> componentController;
@property (readonly, nonatomic) id<SXAdIgnorableViewFactory> adIgnorableViewFactory;
@property (retain, nonatomic) SXDataTableView *tableView;
@property (retain, nonatomic) SXDataTableComponentController *dataTableComponentController;
@property (retain, nonatomic) SXDataTableBlueprint *blueprint;
@property (retain, nonatomic) SXDataTableDictionary *textViews;
@property (retain, nonatomic) SXDataTableDictionary *imageViews;
@property (retain, nonatomic) SXScrollView *scrollView;
@property (retain, nonatomic) SXTangierController *tangierController;
@property (retain, nonatomic) CALayer *rightShadow;
@property (retain, nonatomic) CALayer *leftShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)receivedInfo:(id)a0 fromLayoutingPhaseWithIdentifier:(id)a1;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 imageViewFactory:(id)a4 componentActionHandler:(id)a5 textComponentLayoutHosting:(id)a6 componentController:(id)a7 adIgnorableViewFactory:(id)a8;
- (void)tangierControllerDidScroll:(id)a0;
- (BOOL)userInteractable;
- (id)contentViewForBehavior:(id)a0;
- (id)descriptorForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (void)setupShadowsIfNeeded;
- (void)updateTangierController;
- (void)addTextStorageForIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a0 toCollectior:(id)a1;
- (void)updateShadowOpacity;
- (id)dataTableView:(id)a0 viewForCellAtIndexPath:(struct { unsigned long long x0; unsigned long long x1; })a1 constraintToSize:(struct CGSize { double x0; double x1; })a2;

@end
