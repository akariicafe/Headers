@class NSString, UIImageView, PLRoundProgressView, UILabel, NSArray;

@interface PUActivityProgressViewController : UIViewController {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    PLRoundProgressView *_progressView;
    UIImageView *_checkmarkView;
    NSArray *_labelConstraints;
    NSArray *_contentConstraints;
}

@property (retain, nonatomic) NSString *primaryText;
@property (retain, nonatomic) NSString *secondaryText;
@property (nonatomic) BOOL showCheckmarkOnCompletion;
@property (nonatomic) double fractionCompleted;

- (void)updateViewConstraints;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)reset;
- (id)_progressView;
- (id)_secondaryLabel;
- (id)_primaryLabel;
- (id)_checkmarkView;
- (void)_updatePrimaryLabel;
- (void)_updateSecondaryLabel;
- (void)_updateViewVisibility;

@end
