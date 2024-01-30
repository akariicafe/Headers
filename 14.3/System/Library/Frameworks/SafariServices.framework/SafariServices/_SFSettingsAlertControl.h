@class NSString, _SFSettingsAlertItemBackgroundView, _SFSettingsAlertItem;
@protocol SFSettingsAlertItemViewDelegate;

@interface _SFSettingsAlertControl : UIControl <SFSettingsAlertItemView>

@property (weak, nonatomic) _SFSettingsAlertItem *item;
@property (nonatomic) BOOL hidesSeparator;
@property (readonly, nonatomic) _SFSettingsAlertItemBackgroundView *backgroundView;
@property (nonatomic) long long defaultBackgroundMode;
@property (readonly, nonatomic) long long backgroundMode;
@property (weak, nonatomic) id<SFSettingsAlertItemViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
