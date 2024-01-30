@class NSMutableArray, NSString, EKEventDetailPredictedLocationCell, UIButton, UIView, NSObject, UILabel;
@protocol EKEventDetailTitleCellDelegate;

@interface EKEventDetailTitleCell : EKEventDetailCell <UITextViewDelegate, EKEventDetailPredictedLocationCellDelegate> {
    UILabel *_titleView;
    NSMutableArray *_locationItems;
    EKEventDetailPredictedLocationCell *_predictedLocationView;
    UILabel *_travelTimeView;
    NSMutableArray *_dateTimeViews;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UIButton *_editButton;
    unsigned int _visibleItems;
    BOOL _observingLocaleChanges;
    BOOL _rejectionReasonCell;
    BOOL _hideCellSeparator;
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
+ (id)_largeTitleFont;
+ (id)_locationFont;
+ (void)_registerForInvalidation;
+ (void)_invalidateCachedFonts;

- (void)layoutMarginsDidChange;
- (id)_editButton;
- (void)setTravelTimeString:(id)a0;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)a0;
- (void)addLocation:(id)a0;
- (id)_travelTimeView;
- (void)_updateSeparatorInsets;
- (BOOL)_useLargeFonts;
- (id)_dateTimeViewForLine:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPrimaryTextColor:(id)a0;
- (void)_setDateTimeString:(id)a0 line:(unsigned long long)a1;
- (void)setRecurrenceString:(id)a0;
- (id)_recurrenceView;
- (BOOL)update;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void)_saveEventWithSpan:(long long)a0;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (void)editButtonTapped;
- (id)initAsRejectionReasonCellWithEvent:(id)a0;
- (void)setColor:(id)a0;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)a0 disambiguatedLocation:(id)a1;
- (double)_layoutForWidth:(double)a0;
- (void)setStatusString:(id)a0;
- (void)setLocation:(id)a0;
- (id)_predictedLocationView;
- (void)setHideCellSeparator:(BOOL)a0;
- (id)_statusView;
- (void)_promptForSpanWithSourceView:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 style:(long long)a2;
- (id)_titleView;
- (void)contentSizeCategoryChanged:(id)a0;
- (double)titleHeight;

@end
