@class NSError, NSString, NSArray, UILabel, NSDateComponentsFormatter, NSMutableSet, UIProgressView, UIActivityIndicatorView;

@interface ICQBackupStatusView : UIView <PSHeaderFooterView> {
    UIActivityIndicatorView *_spinner;
    UIProgressView *_progressBar;
    UILabel *_statusLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_backupIssueLabel;
    UILabel *_lastBackupLabel;
    int _animatingToState;
    BOOL _animatedToEnabled;
    NSMutableSet *_visibleSubviews;
    NSDateComponentsFormatter *_durationFormatter;
}

@property (retain, nonatomic) NSError *backupError;
@property (retain, nonatomic) NSString *footerText;
@property (nonatomic) double backupProgress;
@property (retain, nonatomic) NSArray *syncErrors;

- (void)layoutSubviews;
- (void)_layoutSubviews;
- (void)didMoveToSuperview;
- (double)progress;
- (void).cxx_destruct;
- (void)updateStatus:(id)a0;
- (void)sizeToFit;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (id)initWithSpecifier:(id)a0;
- (void)setLastBackupText:(id)a0;
- (void)_sizeToFitWidth:(double)a0 inTableView:(id)a1;
- (void)setBackupProgress:(double)a0 timeIntervalRemaining:(double)a1;
- (void)updateViewsForBackupState:(int)a0 restoreState:(int)a1 enabled:(BOOL)a2;

@end
