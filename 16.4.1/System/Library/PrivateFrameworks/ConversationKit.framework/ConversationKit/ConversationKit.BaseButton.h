@interface ConversationKit.BaseButton : UIButton {
    void /* unknown type, empty encoding */ callbackCancellable;
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ symbol;
    void /* unknown type, empty encoding */ stateConfiguration;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ shape;
    void /* unknown type, empty encoding */ contentAlpha;
}

- (void)updateConfiguration;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
