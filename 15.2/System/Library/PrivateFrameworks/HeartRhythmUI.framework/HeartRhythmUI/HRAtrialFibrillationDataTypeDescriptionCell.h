@class UITextView, HKAttributionTextView, NSArray, NSString;

@interface HRAtrialFibrillationDataTypeDescriptionCell : UITableViewCell <UITextViewDelegate>

@property (retain, nonatomic) UITextView *descriptionTextView;
@property (retain, nonatomic) UITextView *settingsDescriptionTextView;
@property (retain, nonatomic) HKAttributionTextView *settingsLinkTextView;
@property (retain, nonatomic) NSArray *availableVerticalConstraints;
@property (retain, nonatomic) NSArray *unavailableVerticalConstraints;
@property (nonatomic) BOOL featureAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_setupDescriptionTextView;
- (void)_updateTextForDescriptionTextView;

@end
