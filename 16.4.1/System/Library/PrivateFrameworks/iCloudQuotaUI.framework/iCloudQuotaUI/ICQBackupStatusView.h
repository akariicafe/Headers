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

- (void)sizeToFit;
- (void)updateStatus:(id)a0;
- (void)_layoutSubviews;
- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (double)progress;
- (void).cxx_destruct;
- (void)_sizeToFitWidth:(double)a0 inTableView:(id)a1;
- (void)setBackupProgress:(double)a0 timeIntervalRemaining:(double)a1;
- (void)setLastBackupText:(id)a0;
- (void)updateViewsForBackupState:(int)a0 restoreState:(int)a1 enabled:(BOOL)a2;

@end
