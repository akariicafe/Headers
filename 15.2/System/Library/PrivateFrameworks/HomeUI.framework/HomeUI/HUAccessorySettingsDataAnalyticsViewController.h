@class NSString, UIView;

@interface HUAccessorySettingsDataAnalyticsViewController : HUAccessorySettingsDetailsViewController <UITextViewDelegate>

@property (readonly, nonatomic) UIView *linkFooterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)dismissPrivacyController;

@end
