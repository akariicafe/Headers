@class UIButton, EKEvent, UIView, EKStructuredLocation, EKEventDetailsHighlightControl;
@protocol EKEventDetailPredictedLocationCellDelegate;

@interface EKEventDetailPredictedLocationCell : UITableViewCell {
    EKEvent *_event;
    EKStructuredLocation *_location;
    EKEventDetailsHighlightControl *_titleControl;
    UIButton *_dismissButton;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}

@property (weak) id<EKEventDetailPredictedLocationCellDelegate> delegate;
@property (nonatomic) BOOL showsTopSeparator;
@property (readonly, nonatomic) UIView *acceptView;
@property (readonly, nonatomic) UIView *rejectView;

+ (id)_separatorColor;

- (id)init;
- (void).cxx_destruct;
- (void)setEvent:(id)a0;
- (id)initEditable:(BOOL)a0;
- (void)confirmLocationTapped:(id)a0;
- (void)rejectLocationTapped:(id)a0;
- (void)_disambiguateIfNeeded;
- (void)_setEventDate:(id)a0;

@end
