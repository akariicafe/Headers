@class UIView, NSArray, UIImage, _UIFocusMovementInfo, _UIFocusMapSearchInfo, _UIDebugLogReport, _UIDebugIssueReportFormatter, _UIFocusItemInfo, _UIDebugIssueReport, UIFocusGuide;
@protocol UIFocusEnvironment, UIFocusItemScrollableContainer, _UIFocusUpdateRequesting, UIFocusItem;

@interface UIFocusUpdateContext : NSObject {
    struct { unsigned char isValid : 1; unsigned char hasValidated : 1; unsigned char shouldUpdateDestinationItem : 1; unsigned char sourceItemMayRemainFocused : 1; unsigned char didResolveCommonAncestorEnvironment : 1; } _flags;
}

@property (class, readonly, copy, nonatomic, getter=_defaultValidationReportFormatter) _UIDebugIssueReportFormatter *defaultValidationReportFormatter;

@property (readonly, nonatomic, getter=_request) id<_UIFocusUpdateRequesting> request;
@property (readonly, copy, nonatomic, getter=_sourceItemInfo) _UIFocusItemInfo *sourceItemInfo;
@property (readonly, copy, nonatomic, getter=_destinationItemInfo) _UIFocusItemInfo *destinationItemInfo;
@property (readonly, nonatomic, getter=_focusMovement) _UIFocusMovementInfo *focusMovement;
@property (retain, nonatomic, getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:) _UIFocusMapSearchInfo *focusMapSearchInfo;
@property (readonly, weak, nonatomic, getter=_initialDestinationEnvironment) id<UIFocusEnvironment> initialDestinationEnvironment;
@property (readonly, weak, nonatomic, getter=_commonAncestorEnvironment) id<UIFocusEnvironment> commonAncestorEnvironment;
@property (retain, nonatomic, getter=_commonScrollableContainer, setter=_setCommonScrollableContainer:) id<UIFocusItemScrollableContainer> commonScrollableContainer;
@property (nonatomic, getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:) double destinationViewDistanceOffscreen;
@property (retain, nonatomic, getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:) NSArray *regionMapSnapshots;
@property (readonly, nonatomic, getter=_regionMapSnapshotsVisualRepresentation) UIImage *regionMapSnapshotsVisualRepresentation;
@property (retain, nonatomic, getter=_preferredFocusReport, setter=_setPreferredFocusReport:) _UIDebugLogReport *preferredFocusReport;
@property (retain, nonatomic, getter=_validationReport, setter=_setValidationReport:) _UIDebugIssueReport *validationReport;
@property (readonly, weak, nonatomic, getter=_focusedGuide) UIFocusGuide *focusedGuide;
@property (readonly, nonatomic, getter=_focusVelocity) struct CGVector { double x0; double x1; } focusVelocity;
@property (readonly, weak, nonatomic) id<UIFocusItem> previouslyFocusedItem;
@property (readonly, weak, nonatomic) id<UIFocusItem> nextFocusedItem;
@property (readonly, weak, nonatomic) UIView *previouslyFocusedView;
@property (readonly, weak, nonatomic) UIView *nextFocusedView;
@property (readonly, nonatomic) unsigned long long focusHeading;

- (id)debugQuickLookObject;
- (id)_initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setFocusedGuide:(id)a0;
- (BOOL)_validate;
- (id)description;
- (id)_initWithFocusMovementRequest:(id)a0 nextFocusedItem:(id)a1;
- (void)_didUpdateFocus;
- (void)_willUpdateFocusFromFocusedItem:(id)a0;
- (id)_initWithFocusUpdateRequest:(id)a0;
- (BOOL)_isValidInFocusSystem:(id)a0;
- (void)_restoreRestrictedFocusMovementWithMovement:(id)a0;
- (void)_setSourceItemInfo:(id)a0;
- (void)_updateDestinationItemIfNeeded;
- (id)_focusMapSnapshotDebugInfoArray;
- (id)_publicRegionMapSnapshots;
- (void)_setInitialDestinationEnvironment:(id)a0;

@end
