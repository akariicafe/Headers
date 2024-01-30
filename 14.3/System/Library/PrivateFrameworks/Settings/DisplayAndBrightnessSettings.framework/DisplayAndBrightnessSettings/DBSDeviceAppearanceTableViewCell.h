@class UILayoutGuide, DBSDeviceAppearanceOptionView, NSString;
@protocol DBSDeviceAppearanceTableViewCellDelegate;

@interface DBSDeviceAppearanceTableViewCell : UITableViewCell <DBSDeviceAppearanceOptionViewDelegate>

@property (retain, nonatomic) DBSDeviceAppearanceOptionView *_lightOptionView;
@property (retain, nonatomic) DBSDeviceAppearanceOptionView *_darkOptionView;
@property (retain, nonatomic) UILayoutGuide *_leadingGuide;
@property (retain, nonatomic) UILayoutGuide *_middleGuide;
@property (retain, nonatomic) UILayoutGuide *_trailingGuide;
@property (weak, nonatomic) id<DBSDeviceAppearanceTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureView;
- (void)userDidTapOnAppearanceOptionView:(id)a0;

@end
