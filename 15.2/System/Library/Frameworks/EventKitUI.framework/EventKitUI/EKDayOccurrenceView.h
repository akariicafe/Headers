@class EKEvent, NSString, UIView, UIImageView, _UICursorInteraction, EKDayOccurrenceState, NSObject, EKDayOccurrenceTravelTimeView, UIColor;
@protocol EKDayOccurrenceViewDelegate;

@interface EKDayOccurrenceView : UIView <_UICursorInteractionDelegate, NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate> {
    UIImageView *_eventBackgroundView;
    UIImageView *_contentView;
    UIImageView *_travelBackgroundView;
    EKDayOccurrenceTravelTimeView *_travelTimeContentView;
    BOOL _needsContentCalc;
    BOOL _needsBackgroundImageUpdate;
    UIView *_startResizeHandle;
    UIView *_endResizeHandle;
    double _originalXBeforeOffset;
    unsigned char _touchKeptInsideOccurrence : 1;
    unsigned char _offsetContentForLandscape : 1;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
    unsigned long long _bottomPinningState;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unpinnedEventBackgroundFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unpinnedTravelBackgroundFrame;
    UIView *_pinFadeView;
    long long _currentRequestId;
    unsigned long long _invalidatedRequestOptions;
    struct CGPoint { double x; double y; } _contentLocationDuringReducedProcessing;
    UIColor *_stagedBackgroundColor;
    _UICursorInteraction *_cursorInteraction;
}

@property (nonatomic) BOOL touchesAreBeingTracked;
@property (weak, nonatomic) NSObject<EKDayOccurrenceViewDelegate> *delegate;
@property (weak, nonatomic) EKDayOccurrenceView *selectedCopy;
@property (nonatomic) BOOL isVibrant;
@property (readonly, nonatomic) BOOL visibleHeightLocked;
@property (nonatomic) double visibleHeight;
@property (retain, nonatomic) EKEvent *occurrence;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL dimmed;
@property (nonatomic) BOOL allDayDrawingStyle;
@property (nonatomic) BOOL drawsResizeHandles;
@property (nonatomic) BOOL usesSmallText;
@property (nonatomic) BOOL hideBackgroundImage;
@property (nonatomic) BOOL hideText;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (nonatomic) BOOL isSelectedCopyView;
@property (nonatomic) double travelTimeSubviewHeightInPoints;
@property (nonatomic) BOOL isProposedTime;
@property (nonatomic) long long birthdayCount;
@property (nonatomic, getter=isTentative) BOOL tentative;
@property (nonatomic, getter=isDeclined) BOOL declined;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic) BOOL needsReply;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (nonatomic, getter=isBirthday) BOOL birthday;
@property (nonatomic) double cappedColorBarHeight;
@property (nonatomic) BOOL showsTravelTime;
@property (nonatomic) double travelTime;
@property (nonatomic) long long routingMode;
@property (nonatomic) long long occurrenceBackgroundStyle;
@property (nonatomic) BOOL reduceLayoutProcessingForAnimation;
@property (nonatomic) double topPinningProximity;
@property (nonatomic) double bottomPinningProximity;
@property (readonly, nonatomic) BOOL isPinned;
@property (nonatomic) BOOL pointerInteractionDisabled;
@property (nonatomic) BOOL hasPrecedingDuration;
@property (nonatomic) BOOL hasTrailingDuration;
@property (nonatomic) double topYBoundaryForText;
@property (readonly, nonatomic) EKDayOccurrenceState *currentImageState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultPadding;
+ (double)minimumHeightForSizeClass:(long long)a0 orientation:(long long)a1 isAllDay:(BOOL)a2;
+ (void)clearCaches;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultMargin;
+ (id)imageForExternalDragOperationFromEvent:(id)a0 style:(long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentStretchRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)colorBarThickness;
+ (double)minimumHeightForSizeClass:(long long)a0 orientation:(long long)a1 isAllDay:(BOOL)a2 usesSmallText:(BOOL)a3;
+ (double)bottomShadowMargin;
+ (id)framePathForExternalDragOperationWithSize:(struct CGSize { double x0; double x1; })a0;
+ (double)barToBarHorizontalDistanceIncludingBarWidth;
+ (double)enoughHeightForOneLineForEvent:(id)a0 usingSmallText:(BOOL)a1 sizeClass:(long long)a2;
+ (double)minimumHeightForSizeClass:(long long)a0 orientation:(long long)a1;
+ (double)barToBarGapWidth;
+ (double)minNaturalTextHeightForEvent:(id)a0 usingSmallText:(BOOL)a1 sizeClass:(long long)a2;
+ (id)occurrenceViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)_color:(id)a0 lightenedToPercentage:(double)a1 withFinalAlpha:(double)a2;
+ (void)_clearViewCache;
+ (id)_viewCache;

- (void)layoutSubviews;
- (BOOL)hasIcon;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)enoughHeightForOneLine;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateCornerRadius;
- (void)_invalidateContentBounds;
- (void).cxx_destruct;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)prepareForReuse;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_updateColors;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (double)viewMaxNaturalTextHeight;
- (id)cursorInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_invalidateBackgroundImage;
- (void)forceUpdateContentWithPayload:(id)a0;
- (long long)compareOccurrenceViewForTabOrdering:(id)a0;
- (void)_setUpInteraction;
- (void)forceUpdateColors;
- (double)_verticalContentInset;
- (void)requestContentIfNeeded:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_invalidateCurrentRequest;
- (void)updateAlpha;
- (void)_invalidateAllImages;
- (void)_addTravelTimeSubviews;
- (void)_removeTravelTimeSubviews;
- (void)_invalidateTravelTimeImage;
- (void)_invalidateTextImage;
- (void)setAllDayDrawingStyle:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)_isTimedOccurrenceDrawingStyle;
- (id)arrayOfResizeHandles;
- (void)_updateResizeHandleLocations;
- (id)_newResizeHandleView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameMutatedForProximityToHourLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContentImageViewIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeTravelTimeContentRect;
- (void)_updateContentWithPayload:(id)a0;
- (void)_resetContentViewPosition;
- (long long)_compareOccurrenceViewTopToBottomLeftToRight:(id)a0;
- (long long)_compareOccurrenceViewForSelectedCopyOrdering:(id)a0;
- (long long)_compareOccurrenceViewTopToBottom:(id)a0;
- (long long)_compareOccurrenceViewLeftToRight:(id)a0;
- (BOOL)_isBelowOccurrenceView:(id)a0 overlapToIgnore:(double)a1;
- (BOOL)_isAboveOccurrenceView:(id)a0 overlapToIgnore:(double)a1;
- (BOOL)_isAboveAllDayOccurrenceView:(id)a0;
- (BOOL)_isBelowAllDayOccurrenceView:(id)a0;
- (void)animateToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAllDay:(BOOL)a1 beginFromCurrentState:(BOOL)a2 whenFinished:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfOpaqueContent;
- (int)dragTypeFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)bringResizeHandlesToFront;
- (void)fadeInContentViewAt:(double)a0 minWidth:(double)a1 animated:(BOOL)a2;
- (BOOL)resetContentViewToOriginalState:(BOOL)a0;
- (void)setHideText:(BOOL)a0 animate:(BOOL)a1;

@end
