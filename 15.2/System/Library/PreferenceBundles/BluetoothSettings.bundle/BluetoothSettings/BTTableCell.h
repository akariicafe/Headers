@class UIActivityIndicatorView;

@interface BTTableCell : PSTableCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasLimitedConnectivity;

- (void)layoutSubviews;
- (void)setDeviceState:(int)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)dealloc;
- (void)setDeviceStatePaired:(BOOL)a0 andConnected:(BOOL)a1;

@end
