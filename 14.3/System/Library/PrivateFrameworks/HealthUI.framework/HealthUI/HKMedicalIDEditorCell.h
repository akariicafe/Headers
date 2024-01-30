@class UIStackView, NSString, UILabel, HKCaretOptionalTextField, UIView;
@protocol HKMedicalIDEditorCellEditDelegate;

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *labelLabel;
@property (retain, nonatomic) HKCaretOptionalTextField *inputTextField;
@property (retain, nonatomic) UIView *verticalSeparatorView;
@property (nonatomic) double minimumLabelWidth;
@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) id<HKMedicalIDEditorCellEditDelegate> editDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showsLabelAndValue;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)formattedValue;
- (void)dealloc;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)setupStackView;
- (void)setupSubviews;
- (void)_localeDidChange:(id)a0;
- (void)beginEditing;
- (void)commitEditing;
- (void)valueDidChange;
- (void)updateValueLabel;
- (void)dismissInputView;

@end
