@class NSString, NSAttributedString, UIView;

@interface ReaderFontOptionCell : UICollectionViewListCell <_SFSettingsAlertOptionsGroupItemConfiguration>

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) UIView *accessoryView;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelected:(BOOL)a0;
- (void)_updateAccessories;
- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (id)_listContentConfiguration;

@end
