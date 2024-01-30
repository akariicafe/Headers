@class UILayoutGuide, NSString, DBSDeviceAppIconSizeOptionView;
@protocol DBSDeviceAppIconSizeTableViewCellDelegate;

@interface DBSDeviceAppIconSizeTableViewCell : UITableViewCell <DBSDeviceAppIconSizeOptionViewDelegate>

@property (retain, nonatomic) DBSDeviceAppIconSizeOptionView *_moreOptionView;
@property (retain, nonatomic) DBSDeviceAppIconSizeOptionView *_biggerOptionView;
@property (retain, nonatomic) UILayoutGuide *_leadingGuide;
@property (retain, nonatomic) UILayoutGuide *_middleGuide;
@property (retain, nonatomic) UILayoutGuide *_trailingGuide;
@property (weak, nonatomic) id<DBSDeviceAppIconSizeTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimation;
- (void)_configureView;
- (void)reloadDeviceAppIconSizeState;
- (void)userDidTapOnAppIconSizeOptionView:(id)a0;

@end
