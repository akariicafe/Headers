@class GKLabel, NSString, GKTextStyle, NSAttributedString;

@interface GKTextView : UITextView

@property (retain, nonatomic) GKTextStyle *appliedStyle;
@property (nonatomic) GKLabel *placeholderLabel;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) NSAttributedString *attributedPlaceholderText;
@property (retain, nonatomic) GKTextStyle *_baseStyle;

+ (void)initialize;

- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (id)insertDictationResultPlaceholder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyTextStyle:(id)a0;
- (void)replayAndApplyStyle;
- (void)updatePlaceholderVisibility;
- (void)textStorageDidChangeNotification:(id)a0;

@end
