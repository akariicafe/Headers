@class UIActivityIndicatorView;

@interface BTTableCell : PSTableCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasLimitedConnectivity;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDeviceStatePaired:(BOOL)a0 andConnected:(BOOL)a1;
- (void)setDeviceState:(int)a0;

@end
