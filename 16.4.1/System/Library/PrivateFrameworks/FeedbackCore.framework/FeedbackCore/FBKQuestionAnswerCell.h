@class FBKQuestionCellTextView, FBKQuestion, UIImageView, NSString, UILabel, FBKAnswer;
@protocol FBKBugFormEditorDelegate;

@interface FBKQuestionAnswerCell : UITableViewCell <FBKDiffableCell>

@property (retain, nonatomic) UIImageView *errorArrow;
@property (nonatomic) BOOL hasPlaceholder;
@property (nonatomic) BOOL hasKeyboardFocus;
@property (weak, nonatomic) UILabel *questionLabel;
@property (weak, nonatomic) FBKQuestionCellTextView *answerTextView;
@property (weak, nonatomic) id<FBKBugFormEditorDelegate> bugFormEditorDelegate;
@property (retain, nonatomic) FBKQuestion *question;
@property (retain, nonatomic) FBKAnswer *answer;
@property (nonatomic) BOOL showError;
@property (retain, nonatomic) NSString *diffableIdentifier;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)accessibilityLabel;
- (void)awakeFromNib;
- (id)accessibilityIdentifier;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (void)showAccessoryView;
- (BOOL)shouldAllowEditing;
- (void)sanitizeAnswer:(id)a0;
- (void)beginEditingQuestion;
- (void)endEditingQuestion;
- (void)hideAccessoryView;
- (void)hideErrorArrow;
- (void)saveAnswer;
- (void)showErrorArrow;
- (void)updateErrorArrow;

@end
