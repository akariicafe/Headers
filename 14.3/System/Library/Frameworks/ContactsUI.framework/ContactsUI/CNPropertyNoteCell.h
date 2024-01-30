@class UILabel, UITextView;

@interface CNPropertyNoteCell : CNPropertyCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (retain, nonatomic) UITextView *textView;

+ (BOOL)shouldIndentWhileEditing;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setProperty:(id)a0;
- (void).cxx_destruct;
- (void)setValueTextAttributes:(id)a0;
- (id)labelView;
- (void)dealloc;
- (void)setAllowsEditing:(BOOL)a0;
- (BOOL)displaysCellSelectionState;
- (double)valueViewBottomMargin;
- (void)textViewChanged:(id)a0;
- (void)textViewEditingDidEnd:(id)a0;
- (BOOL)supportsTintColorValue;
- (id)valueView;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (BOOL)allowsCellSelection;

@end
