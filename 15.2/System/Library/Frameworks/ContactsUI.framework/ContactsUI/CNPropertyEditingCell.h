@class CNRepeatingGradientSeparatorView, UIButton, NSString;

@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate>

@property (retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator;
@property (readonly, nonatomic) UIButton *labelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)wantsStandardConstraints;
+ (BOOL)wantsChevron;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)picker:(id)a0 didDeleteItem:(id)a1;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;
- (id)labelView;
- (void)setValueTextAttributes:(id)a0;
- (void)updateWithPropertyItem:(id)a0;
- (void)labelButtonClicked:(id)a0;
- (double)leftValueMargin;
- (double)effectiveLabelWidth;
- (void)setVseparatorHidden:(BOOL)a0;
- (void).cxx_destruct;
- (double)minCellHeight;
- (id)variableConstraints;
- (id)constantConstraints;
- (void)dealloc;
- (id)valueString;
- (void)regainFocus;

@end
