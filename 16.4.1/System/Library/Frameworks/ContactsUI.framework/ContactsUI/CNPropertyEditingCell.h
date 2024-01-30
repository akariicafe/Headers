@class CNRepeatingGradientSeparatorView, UIButton, NSString;

@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate>

@property (retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator;
@property (readonly, nonatomic) UIButton *labelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)wantsChevron;
+ (BOOL)wantsStandardConstraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (id)labelView;
- (id)valueString;
- (void).cxx_destruct;
- (double)leftValueMargin;
- (id)constantConstraints;
- (double)effectiveLabelWidth;
- (void)labelButtonClicked:(id)a0;
- (double)minCellHeight;
- (void)picker:(id)a0 didDeleteItem:(id)a1;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;
- (void)regainFocus;
- (void)setValueTextAttributes:(id)a0;
- (void)setVseparatorHidden:(BOOL)a0;
- (void)updateWithPropertyItem:(id)a0;
- (id)variableConstraints;

@end
