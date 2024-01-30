@class UIButton, EKEvent, UIView, EKStructuredLocation, EKEventDetailsHighlightControl;
@protocol EKEventDetailPredictedLocationCellDelegate;

@interface EKEventDetailPredictedLocationCell : UITableViewCell {
    EKEvent *_event;
    EKStructuredLocation *_location;
    EKEventDetailsHighlightControl *_titleControl;
    UIButton *_dismissButton;
}

@property (weak) id<EKEventDetailPredictedLocationCellDelegate> delegate;
@property (readonly, nonatomic) UIView *acceptView;
@property (readonly, nonatomic) UIView *rejectView;

+ (id)_separatorColor;

- (void)setEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initEditable:(BOOL)a0;
- (void)confirmLocationTapped:(id)a0;
- (void)rejectLocationTapped:(id)a0;
- (void)_disambiguateIfNeeded;
- (void)_setEventDate:(id)a0;

@end
