@class UILabel, UITextView;

@interface CNPropertyNoteCell : CNPropertyCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (retain, nonatomic) UITextView *textView;

+ (BOOL)shouldIndentWhileEditing;

- (id)labelView;
- (void)dealloc;
- (void)setProperty:(id)a0;
- (void)setAllowsEditing:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)allowsCellSelection;
- (BOOL)displaysCellSelectionState;
- (void)performDefaultAction;
- (void)setValueTextAttributes:(id)a0;
- (BOOL)shouldPerformDefaultAction;
- (BOOL)supportsTintColorValue;
- (void)textViewChanged:(id)a0;
- (void)textViewEditingDidEnd:(id)a0;
- (id)valueView;
- (double)valueViewBottomMargin;

@end
