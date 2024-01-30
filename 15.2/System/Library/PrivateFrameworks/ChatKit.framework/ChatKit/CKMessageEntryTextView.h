@class UIColor, UIScribbleInteraction, NSString, UIKeyboardInputMode, UILabel, NSAttributedString;

@interface CKMessageEntryTextView : EMKTextView <UIScribbleInteractionDelegate>

@property (nonatomic, getter=isShowingDictationPlaceholder) BOOL showingDictationPlaceholder;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UIKeyboardInputMode *savedKeyboardInputMode;
@property (retain, nonatomic) UIScribbleInteraction *scribbleInteraction;
@property (nonatomic, getter=isPencilWriting) BOOL pencilWriting;
@property (copy, nonatomic) NSAttributedString *compositionText;
@property (copy, nonatomic) NSString *placeholderText;
@property (copy, nonatomic) UIColor *placeholderColor;
@property (nonatomic) double placeHolderWidth;
@property (nonatomic) double placeholderExpandedWidth;
@property (readonly, nonatomic, getter=isSingleLine) BOOL singleLine;
@property (nonatomic, getter=isInPencilMode) BOOL inPencilMode;
@property (nonatomic) BOOL shouldStripEmojis;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL sendCurrentLocationFromKeyboardEnabled;
@property (nonatomic) BOOL updatesFontOnTextChange;
@property (nonatomic) BOOL hideCaret;
@property (nonatomic) BOOL hideCaretUntilUserTypes;
@property (nonatomic) BOOL preventShowingCalloutMenu;
@property (nonatomic) double adjustedLineFragmentPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFont:(id)a0;
- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (id)insertDictationResultPlaceholder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (void)layoutSubviews;
- (void)updateTextView;
- (void)setupScribbleInteraction;
- (void)_stripEmojisIfNecessary;
- (void)updateFontIfNeeded;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (SEL)_sendCurrentLocationAction;
- (void)scribbleInteractionDidFinishWriting:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)scribbleInteractionWillBeginWriting:(id)a0;
- (void)saveKeyboardInputMode;
- (void)restoreKeyboardInputMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)textViewDidChange:(id)a0;

@end
