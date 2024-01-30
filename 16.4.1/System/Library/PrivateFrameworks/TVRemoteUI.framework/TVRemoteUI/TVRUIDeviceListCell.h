@class UIView;
@protocol TVRUIDevice, TVRUIStyleProvider;

@interface TVRUIDeviceListCell : UITableViewCell

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) id<TVRUIDevice> device;
@property (nonatomic) BOOL showSeparator;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_applyFilterForDevice:(id)a0;

@end
