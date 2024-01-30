@class NSNumber, NSString, UIView;
@protocol UITextInput, PKScribbleInteractionWrapper, NSCopying, NSObject, UICoordinateSpace;

@interface PKTextInputElement : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKnownFrame;
    id<UICoordinateSpace> _coordinateSpace;
    BOOL _waitingForMatchingDidFinishWriting;
}

@property (nonatomic) long long _elementType;
@property (weak, nonatomic) id<UITextInput> textInput;
@property (weak, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) id<PKScribbleInteractionWrapper> _viewScribbleInteraction;
@property (readonly, nonatomic) id<PKScribbleInteractionWrapper> _containerInteraction;
@property (readonly, nonatomic) long long _orderInContainer;
@property (nonatomic) BOOL _requestingPlaceholderSuppression;
@property (copy, nonatomic) NSNumber *recognitionIdentifier;
@property (readonly, nonatomic) id<NSObject, NSCopying> containerElementIdentifier;
@property (readonly, nonatomic) UIView *referenceView;
@property (readonly, nonatomic) NSString *debugElementTypeDescription;
@property (readonly, nonatomic, getter=isFocused) BOOL focused;
@property (nonatomic) BOOL legacyHasBeenFocusedWithinContainer;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitToleranceEdgeInsetsFromHorizontalTolerance:(double)a0 verticalTolerance:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitToleranceFrameFromElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (BOOL)showSelectionCommands;
- (BOOL)shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)_textInputView;
- (id)selectionHighlightColor;
- (id)initWithTextInput:(id)a0;
- (id)_scribbleInteraction;
- (BOOL)containsView:(id)a0;
- (id)_containerInteractionView;
- (BOOL)_isFromSameContainerAsElement:(id)a0;
- (BOOL)shouldPostponeFocusing;
- (void)focusElementIfNeededWithReferencePoint:(struct CGPoint { double x0; double x1; })a0 alwaysSetSelectionFromReferencePoint:(BOOL)a1 completion:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_safeHitFrame;
- (id)_textInputResponder;
- (void)_promoteKeyWindowIfNecessary:(id)a0;
- (BOOL)_isFrameTooCloseToBottom;
- (id)initWithElementInteraction:(id)a0 elementIdentifier:(id)a1 orderInContainer:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitToleranceFrameFromElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithFocusedTextInput:(id)a0;
- (void)updateFromEquivalentElement:(id)a0;
- (void)didTargetElementForTouches:(id)a0 event:(id)a1;
- (BOOL)isEquivalentToElement:(id)a0;
- (BOOL)isInFrontOfElement:(id)a0;
- (BOOL)isElementView:(id)a0;
- (void)loadContentFocusingIfNeededWithReferencePoint:(struct CGPoint { double x0; double x1; })a0 alwaysSetSelectionFromReferencePoint:(BOOL)a1 rectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completion:(id /* block */)a3;
- (struct CGPoint { double x0; double x1; })clampedReferencePoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldPostponeCommit;
- (void)_beginSuppressingFieldPlaceholder;
- (void)_finishSuppressingFieldPlaceholderIfNeeded;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })activePreviewRange;
- (BOOL)clearActivePreview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionClipRectInCoordinateSpace:(id)a0;
- (void)notifyTextInputTextWillChange;
- (void)notifyTextInputTextDidChange;
- (void)swapWritingStateWithElement:(id)a0;
- (void)willBeginWriting;
- (void)didEndWriting;

@end
