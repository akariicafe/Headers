@interface NMUDownloadWaitingAlertConfiguration : NMUKeepLocalAlertConfiguration

@property (nonatomic) unsigned long long reason;

- (id)_downloadNowOnCellularActionWithOptions:(id)a0;
- (id)_tryAgainWithOptions:(id)a0;
- (id)initWithModelObject:(id)a0 status:(unsigned long long)a1 downloadPauseReason:(unsigned long long)a2 options:(id)a3;

@end
