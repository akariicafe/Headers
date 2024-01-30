@class NSArray, NSMutableSet;

@interface PKTextInputElementsFinder : NSObject

@property (nonatomic, setter=_setFinderState:) long long _finderState;
@property (retain, nonatomic) NSMutableSet *_pendingElementContainerReplies;
@property (copy, nonatomic) id /* block */ _finderCompletionHandler;
@property (retain, nonatomic) NSArray *_reusableElements;
@property (retain, nonatomic) NSMutableSet *_foundElements;
@property (nonatomic) BOOL _currentlyCollectingViews;
@property (readonly, copy, nonatomic) NSArray *windowsToSearch;

+ (BOOL)responderSupportsPencilTextInput:(id)a0;
+ (id)_uniqueElements:(id)a0 reusingElements:(id)a1;
+ (long long)_shouldConsiderTextInputSearchForView:(id)a0 referenceHitPoint:(struct CGPoint { double x0; double x1; })a1 referenceCoordSpace:(id)a2 nearPointOnly:(BOOL)a3;
+ (id)scribbleElementContainerInteractionInView:(id)a0;
+ (BOOL)_isReachableHitTestView:(id)a0 nearPoint:(struct CGPoint { double x0; double x1; })a1 coordSpace:(id)a2;
+ (BOOL)isResponderEditableTextInput:(id)a0;
+ (BOOL)_anyOtherWindowAboveWindow:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
+ (BOOL)shouldDisableInputAssistantForTextInput:(id)a0;
+ (BOOL)shouldConsiderTextInputSearchForView:(id)a0 referenceHitPoint:(struct CGPoint { double x0; double x1; })a1 referenceCoordSpace:(id)a2;

- (void).cxx_destruct;
- (id)initWithWindowsToSearch:(id)a0;
- (void)findAvailableTextInputElementsWithReusableElements:(id)a0 referenceHitPoint:(struct CGPoint { double x0; double x1; })a1 referenceSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 referenceCoordSpace:(id)a3 completion:(id /* block */)a4;
- (void)_findAvailableTextInputElementsWithReusableElements:(id)a0 referenceHitPoint:(struct CGPoint { double x0; double x1; })a1 referenceSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 referenceCoordSpace:(id)a3 nearPointOnly:(BOOL)a4 completion:(id /* block */)a5;
- (void)_finishFindIfReadyTimedOut:(BOOL)a0;
- (void)_collectTextInputs:(id)a0 asyncElementContainers:(id)a1 underView:(id)a2 referenceHitPoint:(struct CGPoint { double x0; double x1; })a3 referenceSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 referenceCoordSpace:(id)a5 nearPointOnly:(BOOL)a6 firstResponderTextInputView:(id)a7 elementContainerCompletion:(id /* block */)a8;
- (void)_handleRequestTimeoutExpired;
- (BOOL)_isViewForFocusedElement:(id)a0;

@end
