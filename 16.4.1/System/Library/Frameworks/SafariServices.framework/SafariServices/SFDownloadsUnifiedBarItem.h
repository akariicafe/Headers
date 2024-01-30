@class SFDownloadsUnifiedBarItemView;

@interface SFDownloadsUnifiedBarItem : SFUnifiedBarItem {
    SFDownloadsUnifiedBarItemView *_view;
}

@property (nonatomic) double progress;

- (id)view;
- (id)initWithAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)pulse;

@end
