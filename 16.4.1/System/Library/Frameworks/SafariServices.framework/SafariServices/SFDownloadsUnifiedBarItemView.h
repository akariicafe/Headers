@class SFDownloadsBarButtonItemView;

@interface SFDownloadsUnifiedBarItemView : SFUnifiedBarItemView {
    SFDownloadsBarButtonItemView *_buttonView;
}

@property (nonatomic) double progress;

- (double)preferredWidth;
- (id)init;
- (void).cxx_destruct;
- (void)pulse;

@end
