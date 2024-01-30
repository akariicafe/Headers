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
- (void)layoutIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;
- (void)removeAllAnimations;
- (BOOL)host:(id)a0 isForPurpose:(unsigned long long)a1;
- (void)updateViewConstraints;
- (unsigned long long)indexOfHost:(id)a0;
- (void)updateEmptyHeightConstraint;
- (void)updateViewSizingConstraints;
- (void)reloadForPlacement;
- (id)expectedPlacementForHost:(id)a0;
- (void)performForInputAccessoryBackdropViews:(id /* block */)a0;
- (void)extendKeyboardBackdropHeight:(double)a0 withDuration:(double)a1;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (id)itemForPurpose:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_inputViewPadding;
- (void)disableViewSizingConstraints:(unsigned long long)a0 forNewView:(id)a1;
- (void)updateConstraintInsets;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (id)subPlacementFromPlacement:(id)a0 forHost:(id)a1;
- (id)initWithHost:(id)a0;
- (void)resetInputViewVisibility;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)clearInputViewEdgeConstraints;
- (void)_updateBackdropViews;
- (void)unloadForPlacement;
- (id)placementForHost:(id)a0;

@end
