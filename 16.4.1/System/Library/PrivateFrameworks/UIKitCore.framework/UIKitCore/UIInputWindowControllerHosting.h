@class NSArray, UIInputWindowController, NSMutableArray;

@interface UIInputWindowControllerHosting : NSObject {
    NSMutableArray *_hostingItems;
    unsigned long long _currentState;
}

@property (nonatomic) int extraHostsRequired;
@property (weak, nonatomic) UIInputWindowController *owner;
@property (readonly, retain, nonatomic) NSArray *allHostingItems;
@property (nonatomic) BOOL requiresConstraintUpdate;

- (void)resetBackdropHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (void)extendKeyboardBackdropHeight:(double)a0 withDuration:(double)a1;
- (void)disableViewSizingConstraints:(unsigned long long)a0 forNewView:(id)a1;
- (void)_updateBackdropViews;
- (void)updateViewConstraints;
- (void)unloadForPlacement;
- (void)clearInputAssistantViewEdgeConstraints;
- (id)itemForPurpose:(unsigned long long)a0;
- (void)removeAllAnimations;
- (id)initWithHost:(id)a0;
- (id)expectedPlacementForHost:(id)a0;
- (BOOL)useCrescendoHostingItem;
- (void)performForInputAccessoryBackdropViews:(id /* block */)a0;
- (void)clearInputViewEdgeConstraints;
- (void)updateViewSizingConstraints;
- (void)updateEmptyHeightConstraint;
- (BOOL)host:(id)a0 isForPurpose:(unsigned long long)a1;
- (void)reloadForPlacementForInputViewSet:(id)a0;
- (void)removeInputAssistantHostView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_inputViewPadding;
- (id)placementForHost:(id)a0;
- (void)clearInputAccessoryViewEdgeConstraints;
- (unsigned long long)indexOfHost:(id)a0;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (void)resetInputViewVisibility;
- (void)updateConstraintInsets;
- (void).cxx_destruct;
- (id)subPlacementFromPlacement:(id)a0 forHost:(id)a1;

@end
