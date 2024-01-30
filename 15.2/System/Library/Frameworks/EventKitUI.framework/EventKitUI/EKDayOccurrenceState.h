@class UIFont, NSString, UIImage, UITraitCollection, NSAttributedString, NSCache, EKEvent, UIColor;

@interface EKDayOccurrenceState : NSObject <EKMutableDayOccurrenceState> {
    BOOL _isPerformingChanges;
    BOOL _didChange;
}

@property (class, readonly, nonatomic) NSCache *locationCache;
@property (class, readonly, nonatomic) NSCache *languageAwareInsetsCache;
@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } defaultPadding;

@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isDimmed;
@property (nonatomic) BOOL usesSmallText;
@property (nonatomic) BOOL isVibrant;
@property (nonatomic) double travelTime;
@property (nonatomic) long long colorBackgroundStyle;
@property (retain, nonatomic) UIColor *displayColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } estimatedTextFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double travelTimeHeight;
@property (nonatomic) double visibleHeight;
@property (nonatomic) double topYBoundaryForText;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) long long birthdayCount;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isTentative;
@property (readonly, nonatomic) BOOL needsReply;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isDeclined;
@property (readonly, nonatomic) BOOL hasNewTimeProposed;
@property (readonly, nonatomic) BOOL isBirthday;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *time;
@property (readonly, nonatomic) NSAttributedString *location;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *participants;
@property (readonly, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIColor *timeTextColor;
@property (readonly, nonatomic) UIColor *locationTextColor;
@property (readonly, nonatomic) UIColor *statusTextColor;
@property (readonly, nonatomic) UIColor *participantsTextColor;
@property (readonly, nonatomic) UIColor *strikethroughColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double colorBarThickness;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textSpace;
@property (readonly, nonatomic) double minimumNaturalHeightAllText;
@property (readonly, nonatomic) double enoughHeightForOneLine;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } languageAwareInsets;
@property (readonly, nonatomic) UIImage *birthdayIcon;
@property (readonly, nonatomic) UIFont *primaryTextFont;
@property (readonly, nonatomic) UIFont *secondaryTextFont;
@property (readonly, nonatomic) unsigned long long fontCompressionDegree;
@property (retain, nonatomic) EKEvent *occurrence;
@property (nonatomic) BOOL isProposedTime;
@property (nonatomic) BOOL includesPickup;
@property (nonatomic) BOOL includesDropoff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowTimeStringForOccurrence:(id)a0;

- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performChangesWithState:(id)a0;
- (void)performChangesWithItem:(id)a0 viewContent:(id)a1;
- (void)performChangesWithOccurrenceView:(id)a0;
- (double)_verticalContentInset;
- (id)initWithOccurrenceView:(id)a0;

@end
