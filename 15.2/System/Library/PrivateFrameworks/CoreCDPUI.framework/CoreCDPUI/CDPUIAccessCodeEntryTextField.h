@class NSString, UITextView, NSSet;
@protocol CDPUIAccessCodeEntryTextFieldDelegate;

@interface CDPUIAccessCodeEntryTextField : UITextView <UITextViewDelegate> {
    NSSet *_separatorLocations;
    NSSet *_separatorDeleteLocations;
}

@property (class, readonly, nonatomic) unsigned long long accessKeyCharacterCount;
@property (class, readonly, nonatomic) unsigned long long wrappingKeyCharacterCount;

@property (retain, nonatomic) UITextView *placeholderTextView;
@property (copy, nonatomic) NSString *placeholder;
@property (weak, nonatomic) id<CDPUIAccessCodeEntryTextFieldDelegate> accessCodeInputDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFont:(id)a0;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (void)setupUI;
- (void)setTextAlignment:(long long)a0;
- (BOOL)enablesReturnKeyAutomatically;
- (void)setText:(id)a0;
- (BOOL)hasText;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (unsigned long long)_numberOfSeparators;
- (void)updatePlaceholderVisibility;
- (void)setupSeparatorLocations;
- (unsigned long long)_totalCharacterLimit;
- (id)_sanitizeInputString:(id)a0;
- (void)_handleMultiCharacterStringInput:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
