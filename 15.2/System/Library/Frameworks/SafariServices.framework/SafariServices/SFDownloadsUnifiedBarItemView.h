@class SFDownloadsBarButtonItemView;

@interface SFDownloadsUnifiedBarItemView : SFUnifiedBarItemView {
    SFDownloadsBarButtonItemView *_buttonView;
}

@property (nonatomic) double progress;

- (void)pulse;
- (void).cxx_destruct;
- (id)init;
- (double)preferredWidth;

@end
