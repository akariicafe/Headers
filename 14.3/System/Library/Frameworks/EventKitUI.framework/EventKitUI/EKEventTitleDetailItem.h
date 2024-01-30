@class UIColor, EKEventDetailTitleCell, UIView, NSObject, NSDate;
@protocol EKEventTitleDetailItemDelegate;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {
    EKEventDetailTitleCell *_cell;
    UIColor *_color;
    BOOL _showDot;
    BOOL _cellNeedsUpdate;
}

@property (nonatomic) BOOL hidesSeparator;
@property (retain, nonatomic) NSDate *proposedTime;
@property (readonly, nonatomic) UIView *sourceViewForPopover;
@property (weak, nonatomic) NSObject<EKEventTitleDetailItemDelegate> *editDelegate;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) unsigned long long numberOfTitleLines;

- (void)setCellPosition:(int)a0;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshCopiedEvents;
- (void)editButtonPressed;
- (void)_updateCellIfNeededForWidth:(double)a0;
- (BOOL)minimalMode;
- (double)titleHeight;
- (void)predictionWasActedOn;
- (BOOL)shouldShowEditButtonInline;

@end
