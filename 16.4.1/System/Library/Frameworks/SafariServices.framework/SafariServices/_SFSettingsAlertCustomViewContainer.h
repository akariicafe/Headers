@class _SFSettingsAlertItem, NSString, UIImage, UIView, NSAttributedString, _SFSettingsAlertItemBackgroundView;
@protocol SFSettingsAlertItemViewDelegate;

@interface _SFSettingsAlertCustomViewContainer : UIView <SFSettingsAlertItemView> {
    _SFSettingsAlertItemBackgroundView *_backgroundView;
}

@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) _SFSettingsAlertItem *item;
@property (nonatomic) BOOL hidesSeparator;
@property (nonatomic) long long defaultBackgroundMode;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSAttributedString *attributedDetailText;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long backgroundMode;
@property (weak, nonatomic) id<SFSettingsAlertItemViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (void).cxx_destruct;

@end
