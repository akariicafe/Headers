@class ColorBarView, NSDate, UIVisualEffect, NSDictionary, NSObject, EKCalendarDate, NSMutableArray, UIColor, NSLayoutConstraint, NSString, ColoredBackgroundView, EKUIOccurrenceTableViewCellLabel, NSArray, UIImageView;
@protocol OS_dispatch_source;

@interface EKUIOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts {
    EKUIOccurrenceTableViewCellLabel *_travelTextLabel;
    EKUIOccurrenceTableViewCellLabel *_primaryLabel;
    EKUIOccurrenceTableViewCellLabel *_secondaryLabel;
    EKUIOccurrenceTableViewCellLabel *_travelDepartureTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_topTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_bottomTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_countdownLabel;
    ColorBarView *_colorBarView;
    ColorBarView *_travelTimeColorBarView;
    ColoredBackgroundView *_coloredBackgroundView;
    UIImageView *_angleStripeBackgroundView;
    UIImageView *_accessoryImageView;
    NSArray *_ekUIOccurrenceTableViewCellConstraints;
    BOOL _areCurrentCellConstraintsForLargeText;
    BOOL _carplayMode;
    BOOL _includesTopTimeLabel;
    struct CGSize { double width; double height; } _sizeWhenLayerLastCalculated;
    NSMutableArray *_primaryVisualEffectViews;
    NSMutableArray *_secondaryVisualEffectViews;
    BOOL _travelTimeTemplate;
    BOOL _invitationTemplate;
    BOOL _singleLineAllDayTemplate;
    BOOL _singleLineAllDayWithImageTemplate;
    NSLayoutConstraint *_contentTop_to_travelTextBaseline_Constraint;
    NSLayoutConstraint *_contentTop_to_primaryTextBaseline_Constraint;
    NSLayoutConstraint *_contentBottom_to_bottomTextBaseline_Constraint;
    NSLayoutConstraint *_primaryTextBaseline_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint *_travelTextBaseline_to_primaryTextBaseLine_Constraint;
    NSLayoutConstraint *_horizontalDividerBarBottom_to_colorBarTop_Constraint;
    NSLayoutConstraint *_contentTop_to_colorBarTop_Constraint;
    NSLayoutConstraint *_timeTextWidthConstraint;
    NSLayoutConstraint *_timeTextHorizontalPositioningConstraint;
    NSLayoutConstraint *_colorBarHorizontalPositioningConstraint;
    NSLayoutConstraint *_countdownLabelRightMarginConstraint;
    NSLayoutConstraint *_countdownLabelBaseling_to_contentBottom_Constraint;
    double _travelTime;
    NSDate *_eventStartDateIncludingTravelTime;
    EKCalendarDate *_eventEndDate;
    NSString *_eventTitle;
    NSString *_eventLocation;
    NSString *_topTimeString;
    NSString *_bottomTimeString;
    NSString *_countdownLabelString;
    NSString *_travelTextLabelString;
    NSString *_travelAddressString;
    NSString *_travelDepartureTimeString;
    NSDictionary *_secondaryStringDrawingAttributes;
    NSDictionary *_topTimeStringDrawingAttributes;
    NSDictionary *_bottomTimeStringDrawingAttributes;
    NSDictionary *_travelTextLabelStringDrawingAttributes;
    NSDictionary *_travelAddressStringDrawingAttributes;
    NSDictionary *_travelDepartureTimeStringDrawingAttributes;
    BOOL _isPast;
    BOOL _isAllDay;
    BOOL _isRecurring;
    BOOL _isBirthday;
    BOOL _tentative;
    BOOL _declined;
    BOOL _needsReply;
    BOOL _cancelled;
    BOOL _opaque;
    NSObject<OS_dispatch_source> *_countdownLabelUpdateTimer;
    BOOL _secondaryLabelShouldShowAlertDot;
}

@property (nonatomic) BOOL doesNotUseTemplate;
@property (nonatomic) BOOL isTemplateCell;
@property (retain, nonatomic) UIColor *eventCalendarColor;
@property (readonly, nonatomic) EKCalendarDate *eventStartDate;
@property (nonatomic) BOOL isFakeInvitation;
@property (retain, nonatomic) UIVisualEffect *primaryVisualEffect;
@property (retain, nonatomic) UIVisualEffect *secondaryVisualEffect;

+ (void)initialize;
+ (id)cancelledDeclinedColorBarColor;
+ (BOOL)requiresConstraintBasedLayout;
+ (void)_clearCaches;
+ (BOOL)vibrant;
+ (id)reuseIdentifierForTemplate;
+ (id)reuseIdentifierForTemplateWithTravelTime;
+ (id)reuseIdentifierForTemplateInvitation;
+ (id)reuseIdentifierForTemplateSingleLineAllDay;
+ (id)reuseIdentifierForTemplateSingleLineAllDayWithImage;
+ (id)reuseIdentifierForEvent:(id)a0;
+ (double)needsReplyStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (double)tentativeStripeBackgroundAlpha;
+ (id)_needsReplyAngledStripeBackground:(id)a0;
+ (id)_tentativeAngledStripeBackground:(id)a0;
+ (double)_rightImageSpacing;
+ (id)needsReplyStripeColor;
+ (id)normalBackgroundColor;
+ (id)_allDayLocalizedString;
+ (id)allReuseIdentifiers;
+ (double)cellHeightForWidth:(double)a0;
+ (double)singleLineCellHeightForWidth:(double)a0;
+ (double)travelTimeCellHeightForWidth:(double)a0;
+ (BOOL)drawsBackgroundForEvent:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedSeparatorInsets;
+ (id)color:(id)a0 lightenedToPercentage:(double)a1 withFinalAlpha:(double)a2;
+ (id)_nowLocalizedString;

- (BOOL)isTentative;
- (double)_cornerRadius;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isPast;
- (id)imageView;
- (id)primaryPastTextColor;
- (id)cancelledDeclinedColorBarColor;
- (id)prefixTextColor;
- (id)primaryStrikethroughTextColor;
- (id)secondaryStrikethroughTextColor;
- (id)secondaryPastTextColor;
- (id)invitationPrimaryTextColor;
- (void)_updateAccessoryImage;
- (id)textLabel;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)dealloc;
- (BOOL)needsReply;
- (void)updateConstraints;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_setUpConstraints;
- (BOOL)isDeclined;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (void)setCalendarColor:(id)a0;
- (BOOL)isAllDay;
- (void)layoutSubviews;
- (BOOL)isBirthday;
- (void)_createViewsForReuseIdentifier:(id)a0;
- (void)setUpRoundedSelectionHighlight;
- (id)_backgroundViewConfigurationForState:(unsigned long long)a0;
- (void)_uninstallCountdownTimer;
- (void)updateWithEvent:(id)a0 calendar:(id)a1 placedUnderDayWithStartDate:(id)a2 opaque:(BOOL)a3 drawsDimmedForPast:(BOOL)a4;
- (void)updateAngleBackgroundColor;
- (void)_updateColoredBackgroundViewColor;
- (void)updateWithEvent:(id)a0 calendar:(id)a1 placedUnderDayWithStartDate:(id)a2 opaque:(BOOL)a3 drawsDimmedForPast:(BOOL)a4 includingTravelTime:(BOOL)a5;
- (void)updateWithEvent:(id)a0 calendar:(id)a1 placedUnderDayWithStartDate:(id)a2 opaque:(BOOL)a3 drawsDimmedForPast:(BOOL)a4 includingTravelTime:(BOOL)a5 includingCountdown:(BOOL)a6;
- (void)updateWithEvent:(id)a0 calendar:(id)a1 placedUnderDayWithStartDate:(id)a2 opaque:(BOOL)a3 drawsDimmedForPast:(BOOL)a4 includingTravelTime:(BOOL)a5 includingCountdown:(BOOL)a6 includingTopTimeLabel:(BOOL)a7 carplayMode:(BOOL)a8;
- (void)_updateSecondaryTextLabel;
- (void)_updateTravelTimeLabel;
- (void)forceUpdateOfAllElements;
- (void)_updatePrimaryTextLabel;
- (void)_updateCountdownLabel;
- (void)_updateTopTimeLabel;
- (void)_updateBottomTimeLabel;
- (void)_updateTravelDepartureTimeLabel;
- (void)_updateColorBarColor;
- (id)_birthdayIcon;
- (BOOL)_eventIsNow;
- (id)_sharedNumberFormatter;
- (id)accessoryImage;
- (void)hideUnwantedItemsInCarplayMode;
- (id)_needsReplyDot;
- (void)contentCategorySizeChanged;
- (double)needsReplyStripeBackgroundAlpha;
- (id)tentativeStripeColor;
- (double)tentativeStripeBackgroundAlpha;
- (void)_addSubview:(id)a0 forVibrancy:(BOOL)a1 usingPrimaryEffect:(BOOL)a2;
- (void)_addVibrantSubview:(id)a0 usingPrimaryEffect:(BOOL)a1;
- (double)_widthForTimeViews;
- (id)needsReplyStripeColor;
- (id)needsReplyAngledStripeBackground;
- (id)topTimeColor;
- (id)coloredBackgroundViewColor;
- (id)coloredBackgroundViewFilterColor;
- (id)coloredBackgroundViewFilter;
- (id)colorBarColor;
- (id)normalBackgroundColor;
- (id)_createParentVisualEffectViewWithVisualEffect:(id)a0;
- (double)_verticalSpacingTravelBaselineToPrimaryBaseline;
- (double)_leftMarginForTimeViewsFromTimeWidth:(double)a0;
- (double)_rightMarginForTimeViewsFromTimeWidth:(double)a0;
- (id)_textForCountdownLabelWithCurrentDate:(id)a0;
- (id)_setUpLargeTextConstraints;
- (id)_setUpStandardConstraints;
- (double)_verticalSpacingPrimaryLabelToTimeLabel;
- (void)_updateNumberOfLinesForLabel:(id)a0 isRightAlignedInStandardLayout:(BOOL)a1;
- (void)_installCountdownTimerWithFireDate:(id)a0;
- (id)birthdayIconColor;
- (id)tentativeAngledStripeBackground;
- (void)_countdownTimerFired;
- (void)_resetCountdownTimerBasedOnCurrentDateForStringGeneration:(id)a0;
- (id)_textForTopTimeLabel;
- (id)_textForBottomTimeLabel;
- (id)_textForDepartureTimeLabel;
- (id)_selectedBackgroundViewWithColor:(id)a0;
- (id)detailTextLabel;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (void)setColorBarLayerFilter:(id)a0;
- (void)_updateContentForSizeCategoryChange:(id)a0;
- (id)reuseIdentifier;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;

@end
