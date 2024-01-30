@class NSArray, UIInputWindowController, NSMutableArray;

@interface UIInputWindowControllerHosting : NSObject {
    NSMutableArray *_hostingItems;
    unsigned long long _currentState;
}

@property (nonatomic) int extraHostsRequired;
@property (weak, nonatomic) UIInputWindowController *owner;
@property (readonly, retain, nonatomic) NSArray *allHostingItems;
@property (nonatomic) BOOL requiresConstraintUpdate;

- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (void)extendKeyboardBackdropHeight:(double)a0 withDuration:(double)a1;
- (id)expectedPlacementForHost:(id)a0;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (void).cxx_destruct;
- (void)unloadForPlacement;
- (void)clearInputAssistantViewEdgeConstraints;
- (unsigned long long)indexOfHost:(id)a0;
- (id)itemForPurpose:(unsigned long long)a0;
- (void)resetBackdropHeight;
- (void)disableViewSizingConstraints:(unsigned long long)a0 forNewView:(id)a1;
- (id)placementForHost:(id)a0;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)removeAllAnimations;
- (void)updateViewConstraints;
- (void)updateViewSizingConstraints;
- (void)performForInputAccessoryBackdropViews:(id /* block */)a0;
- (id)subPlacementFromPlacement:(id)a0 forHost:(id)a1;
- (void)_updateBackdropViews;
- (id)initWithHost:(id)a0;
- (void)reloadForPlacement;
- (void)clearInputViewEdgeConstraints;
- (void)updateEmptyHeightConstraint;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_inputViewPadding;
- (BOOL)host:(id)a0 isForPurpose:(unsigned long long)a1;
- (void)updateConstraintInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;

@end
