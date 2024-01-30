@class SFDownloadsBarButtonItemView;

@interface SFDownloadsBarButtonItem : UIBarButtonItem {
    SFDownloadsBarButtonItemView *_buttonView;
}

@property (nonatomic) double progress;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setEnabled:(BOOL)a0;
- (void)pulse;
- (void).cxx_destruct;

@end
