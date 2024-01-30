@class EKEventDetailConferenceCell, NSString, UIView, UIButton, NSMutableArray, NSObject, UILabel, EKEventDetailPredictedLocationCell;
@protocol EKEventDetailTitleCellDelegate;

@interface EKEventDetailTitleCell : EKEventDetailCell <UITextViewDelegate, EKEventDetailPredictedLocationCellDelegate, ConferenceCellDelegate> {
    UILabel *_titleView;
    NSMutableArray *_locationItems;
    UIView *_predictedLocationContainer;
    EKEventDetailPredictedLocationCell *_predictedLocationView;
    EKEventDetailConferenceCell *_conferenceDetailView;
    UILabel *_travelTimeView;
    NSMutableArray *_dateTimeViews;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UIButton *_editButton;
    unsigned int _visibleItems;
    BOOL _observingLocaleChanges;
    BOOL _rejectionReasonCell;
    BOOL _hideTopCellSeparator;
    BOOL _hideBottomCellSeparator;
    int _lastPosition;
}

@property (weak, nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) BOOL showingInlineDayView;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (readonly, nonatomic) UIView *sourceViewForPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_titleFont;
+ (void)_invalidateCachedFonts;
+ (id)_largeTitleFont;
+ (id)_locationFont;
+ (void)_registerForInvalidation;

- (double)titleHeight;
- (id)owningViewController;
- (id)_travelTimeView;
- (id)_predictedLocationView;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (BOOL)_shouldShowConferenceCell;
- (void)addLocation:(id)a0;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)a0 disambiguatedLocation:(id)a1;
- (BOOL)_useLargeFonts;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 style:(long long)a2;
- (id)_statusView;
- (id)_editButton;
- (void)_promptForSpanWithSourceView:(id)a0 completionBlock:(id /* block */)a1;
- (void)setPrimaryTextColor:(id)a0;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (id)initAsRejectionReasonCellWithEvent:(id)a0;
- (void)_saveEventWithSpan:(long long)a0;
- (BOOL)update;
- (id)_conferenceDetailView;
- (double)_layoutForWidth:(double)a0;
- (void).cxx_destruct;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)a0;
- (id)_dateTimeViewForLine:(unsigned long long)a0;
- (void)_setDateTimeString:(id)a0 line:(unsigned long long)a1;
- (void)setHideTopCellSeparator:(BOOL)a0;
- (void)setTravelTimeString:(id)a0;
- (void)conferenceCellUpdated:(id)a0;
- (void)editButtonTapped;
- (id)_recurrenceView;
- (id)_titleView;
- (id)_predictedLocationContainer;
- (void)_updateSeparatorStyle;
- (void)setTitle:(id)a0;
- (void)setRecurrenceString:(id)a0;
- (void)setHideBottomCellSeparator:(BOOL)a0;
- (void)dealloc;
- (void)setColor:(id)a0;
- (void)setLocation:(id)a0;
- (void)setStatusString:(id)a0;
- (void)contentSizeCategoryChanged:(id)a0;

@end
