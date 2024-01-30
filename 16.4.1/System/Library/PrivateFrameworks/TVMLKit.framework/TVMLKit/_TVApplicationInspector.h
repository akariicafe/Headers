@class TVApplicationController, NSString, NSHashTable, _TVInspectorCapturingView;

@interface _TVApplicationInspector : NSObject <_TVInspectorCapturingViewDelegate>

@property (readonly, nonatomic) _TVInspectorCapturingView *capturingView;
@property (readonly, nonatomic) NSHashTable *highlightViews;
@property (readonly, weak, nonatomic) TVApplicationController *applicationController;
@property (nonatomic, getter=isInspectionModeEnabled) BOOL inspectionModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)rootView;
- (void)cancelHighlight;
- (id)initWithApplicationController:(id)a0;
- (id)_highlightViewForElement:(id)a0 contentColor:(id)a1 borderColor:(id)a2;
- (void)capturingView:(id)a0 didCaptureTapOnView:(id)a1;
- (void)highlightViewElements:(id)a0 contentColor:(id)a1 borderColor:(id)a2;

@end
