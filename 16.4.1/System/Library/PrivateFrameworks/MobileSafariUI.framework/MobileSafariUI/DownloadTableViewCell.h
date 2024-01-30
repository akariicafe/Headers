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
- (struct { id x0; id x1; BOOL x2; BOOL x3; } *)deferrableUpdateViewState;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)updateContents;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)downloadIconCache:(id)a0 didGenerateNewIcon:(id)a1 forSource:(id)a2;
- (id)_busyStatus;
- (id)_buttonWithSymbolName:(id)a0;
- (void)_downloadChanged:(id)a0;
- (void)_downloadURLChanged:(id)a0;
- (void)_updateCellContents;
- (void)_updateCellContentsForSizing;

@end
