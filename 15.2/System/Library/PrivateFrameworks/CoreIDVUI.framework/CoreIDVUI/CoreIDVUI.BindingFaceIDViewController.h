@interface CoreIDVUI.BindingFaceIDViewController : CoreIDVUI.BiometricBindingViewController <LAUIDelegate> {
    void /* unknown type, empty encoding */ glyph;
    void /* unknown type, empty encoding */ hasReceivedFaceIDEvents;
}

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;

@end
