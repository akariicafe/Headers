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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)a0;
- (void)setupSubviews;
- (id)formattedValue;
- (void)setupStackView;
- (void)commitEditing;
- (void)dealloc;
- (void)valueDidChange;
- (void)updateValueLabel;
- (void)dismissInputView;

@end
