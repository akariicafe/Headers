@class needsDeferredContentUpdate, UILabel, UIImageView, _SFDownload, UIButton, backgroundNotificationObserver, UIProgressView, _SFDownloadIconCache;
@protocol DownloadTableViewCellDelegate;

@interface DownloadTableViewCell : UITableViewCell <SFDeferrableUpdateView, _SFDownloadIconCacheObserver> {
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIProgressView *_progressView;
    UIButton *_cancelButton;
    UIButton *_revealButton;
    UIButton *_resumeButton;
    struct { backgroundNotificationObserver *foregroundNotificationObserver; needsDeferredContentUpdate *x0; BOOL x1; BOOL sceneIsForeground; } deferrableUpdateViewState;
}

@property (retain, nonatomic) _SFDownload *download;
@property (retain, nonatomic) _SFDownloadIconCache *iconCache;
@property (weak, nonatomic) id<DownloadTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIImageView *iconView;

+ (id)tableViewCellForSizeEstimation;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateContents;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (struct { id x0; id x1; BOOL x2; BOOL x3; } *)deferrableUpdateViewState;
- (void)didMoveToWindow;
- (void)downloadIconCache:(id)a0 didGenerateNewIcon:(id)a1 forSource:(id)a2;
- (id)_busyStatus;
- (void)_updateCellContentsForSizing;
- (void)_downloadChanged:(id)a0;
- (void)_downloadURLChanged:(id)a0;
- (void)_updateCellContents;

@end
