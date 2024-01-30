@class UIView, NSString, UILabel, UIButton, NSMutableArray, NSObject, EKEventDetailSuggestedLocationCell, EKEventDetailConferenceCell;
@protocol EKEventDetailTitleCellDelegate;

@interface EKEventDetailTitleCell : EKEventDetailCell <UITextViewDelegate, EKEventDetailSuggestedLocationCellDelegate, ConferenceCellDelegate> {
    UILabel *_titleView;
    NSMutableArray *_locationItems;
    BOOL _showAllLocation;
    struct _NSRange { unsigned long long location; unsigned long long length; } _showLocationRange;
    UIView *_predictedLocationContainer;
    EKEventDetailSuggestedLocationCell *_suggestedLocationCell;
    EKEventDetailConferenceCell *_conferenceDetailView;
    UILabel *_travelTimeView;
    NSMutableArray *_dateTimeViews;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UIButton *_editButton;
    unsigned int _visibleItems;
    BOOL _observingLocaleChanges;
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
+ (id)_locationFont;
+ (void)_invalidateCachedFonts;
+ (void)_registerForInvalidation;
+ (id)_largeTitleFont;

- (id)owningViewController;
- (id)_dateTimeViewForLine:(unsigned long long)a0;
- (id)_predictedLocationContainer;
- (void)setPrimaryTextColor:(id)a0;
- (void)addLocation:(id)a0;
- (void)setStatusString:(id)a0;
- (id)_titleView;
- (void)setTravelTimeString:(id)a0;
- (void)didTapAddSuggestedLocationCell:(id)a0 disambiguatedLocation:(id)a1;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (id)_suggestedLocationCell;
- (void)setHideTopCellSeparator:(BOOL)a0;
- (void)setHideBottomCellSeparator:(BOOL)a0;
- (BOOL)update;
- (double)_layoutForWidth:(double)a0;
- (id)_statusView;
- (void)layoutMarginsDidChange;
- (double)titleHeight;
- (id)_recurrenceView;
- (id)_editButton;
- (void)editButtonTapped;
- (BOOL)_useLargeFonts;
- (void)dealloc;
- (void)_setDateTimeString:(id)a0 line:(unsigned long long)a1;
- (void)didTapDismissSuggestedLocationCell:(id)a0;
- (id)_travelTimeView;
- (void)layoutSubviews;
- (void)_updateSeparatorStyle;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 style:(long long)a2;
- (void)setColor:(id)a0;
- (void)_saveEventWithSpan:(long long)a0;
- (void)setRecurrenceString:(id)a0;
- (id)_conferenceDetailView;
- (void)_promptForSpanWithSourceView:(id)a0 completionBlock:(id /* block */)a1;
- (void)setTitle:(id)a0;
- (void)conferenceCellUpdated:(id)a0;
- (void)handleTapOnLabel:(id)a0;
- (void)contentSizeCategoryChanged:(id)a0;
- (void)setLocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldShowConferenceCell;

@end
