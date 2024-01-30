@class GKLabel, NSString, GKTextStyle, NSAttributedString;

@interface GKTextView : UITextView

@property (retain, nonatomic) GKTextStyle *appliedStyle;
@property (nonatomic) GKLabel *placeholderLabel;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) NSAttributedString *attributedPlaceholderText;
@property (retain, nonatomic) GKTextStyle *_baseStyle;

+ (void)initialize;

- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAttributedText:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)insertDictationResultPlaceholder;
- (void).cxx_destruct;
- (void)applyTextStyle:(id)a0;
- (void)replayAndApplyStyle;
- (void)textStorageDidChangeNotification:(id)a0;
- (void)updatePlaceholderVisibility;

@end
