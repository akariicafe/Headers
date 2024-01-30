@class NSString, NSMutableString, NSMutableArray, UIButton;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
    NSMutableString *_value;
    NSMutableArray *_entryFields;
    NSMutableArray *_entryBackgrounds;
    UIButton *_okButton;
    BOOL _opaqueBackground;
    BOOL _centerHorizontally;
    long long _keyboardType;
    long long _keyboardAppearance;
    int _emptyContentReturnKeyType;
    id _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)textFieldClass;
+ (double)defaultHeight;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (BOOL)isFirstResponder;
- (id)stringValue;
- (void)_updateFields;
- (void)okButtonClicked:(id)a0;
- (void)deleteLastCharacter;
- (void)setKeyboardType:(long long)a0 appearance:(long long)a1;
- (void)setKeyboardType:(long long)a0 appearance:(long long)a1 emptyContentReturnKeyType:(int)a2;
- (void)setNumberOfEntryFields:(int)a0 opaqueBackground:(BOOL)a1;
- (BOOL)showsOKButton;
- (BOOL)textField:(id)a0 shouldInsertText:(id)a1 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setStringValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)_textDidChange;
- (void)setKeyboardType:(long long)a0;
- (int)numberOfEntryFields;
- (void)setNumberOfEntryFields:(int)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)textFieldDidResignFirstResponder:(id)a0;
- (void)appendString:(id)a0;
- (BOOL)textFieldShouldStartEditing:(id)a0;
- (void)setTextCentersHorizontally:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)setShowsOKButton:(BOOL)a0;

@end
