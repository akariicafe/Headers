@protocol UITextViewDelegate;

@interface WDClinicalSettingsOptInNib : UINib

@property (weak, nonatomic) id<UITextViewDelegate> textViewDelegate;

- (id)instantiateWithOwner:(id)a0 options:(id)a1;
- (id)_footerTextViewString;
- (void).cxx_destruct;

@end
