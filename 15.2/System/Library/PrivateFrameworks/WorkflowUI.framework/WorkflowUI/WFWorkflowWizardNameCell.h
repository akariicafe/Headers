@class NSString, WFWorkflowWizardNameIconButton, WFWorkflowWizardNameClearButton, UITextField, UIView, WFWorkflowWizardNameRecordButton, NSArray;
@protocol WFWorkflowWizardNameCellDataSource, WFWorkflowWizardNameCellDelegate;

@interface WFWorkflowWizardNameCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIView *phraseView;
@property (retain, nonatomic) WFWorkflowWizardNameIconButton *iconButton;
@property (retain, nonatomic) WFWorkflowWizardNameRecordButton *recordButton;
@property (retain, nonatomic) WFWorkflowWizardNameClearButton *clearButton;
@property (retain, nonatomic) UITextField *shortcutNameTextField;
@property (retain, nonatomic) NSArray *horizontalConstraintsWithInset;
@property (retain, nonatomic) NSArray *horizontalConstraintsWithoutInset;
@property (weak, nonatomic) id<WFWorkflowWizardNameCellDelegate> delegate;
@property (weak, nonatomic) id<WFWorkflowWizardNameCellDataSource> dataSource;
@property (nonatomic) BOOL showsHeySiri;
@property (nonatomic) BOOL useDoneButtonOnKeyboard;
@property (nonatomic) BOOL useHorizontalInset;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultRowHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)configureIconButton;
- (BOOL)useDropdownMenuIconButton;
- (void)setIconButtonConstraints;
- (id)regularIconButton;
- (id)dropdownMenuIconButton;
- (void)setDropdownMenuForIconButton:(id)a0;
- (void)setUseHorizontalContraints:(BOOL)a0;
- (void)setIcon:(id)a0 customImageData:(id)a1;
- (void)configureWithName:(id)a0 showsHeySiri:(BOOL)a1 icon:(id)a2;
- (void)configureWithName:(id)a0 showsHeySiri:(BOOL)a1 useHorizontalInset:(BOOL)a2 icon:(id)a3;
- (void)configureWithName:(id)a0 showsHeySiri:(BOOL)a1 useHorizontalInset:(BOOL)a2 icon:(id)a3 customImageData:(id)a4;
- (BOOL)shortcutNameIsEmpty;
- (void)textFieldDidChange;
- (void)updateButtonVisibility;
- (void)updateViewForDoneButton;
- (void)updateViewForHorizontalConstraints;
- (void)didTapIconButton;
- (void)didTapRecordButton;
- (void)didTapClearButton;

@end
