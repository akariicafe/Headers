@class UILabel, UITextView;

@interface CNPropertyNoteCell : CNPropertyCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (retain, nonatomic) UITextView *textView;

+ (BOOL)shouldIndentWhileEditing;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setAllowsEditing:(BOOL)a0;
- (void)setProperty:(id)a0;
- (void)textViewChanged:(id)a0;
- (void)textViewEditingDidEnd:(id)a0;
- (id)labelView;
- (void)setValueTextAttributes:(id)a0;
- (BOOL)allowsCellSelection;
- (id)valueView;
- (void).cxx_destruct;
- (BOOL)shouldPerformDefaultAction;
- (void)dealloc;
- (BOOL)supportsTintColorValue;
- (double)valueViewBottomMargin;
- (BOOL)displaysCellSelectionState;
- (void)performDefaultAction;

@end
