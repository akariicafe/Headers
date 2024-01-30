@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject {
    NSString *_subtitle;
    NSString *_styleString;
}

@property (readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
@property (readonly, nonatomic) int buttonType;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *systemItemString;
@property (nonatomic) long long tag;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } imageInsets;
@property (readonly, nonatomic, getter=isBackButton) BOOL backButton;
@property (readonly, nonatomic) NSString *styleString;

+ (id)objectWithDefaultButtonForScriptButton:(id)a0;

- (void)setEnabled:(BOOL)a0;
- (void)dealloc;
- (void)buttonAction:(id)a0;
- (id)initWithSystemItemString:(id)a0;
- (void)configureFromScriptButtonNativeObject:(id)a0;
- (void)hideConfirmationAnimated:(BOOL)a0;
- (void)disconnectButtonAction;
- (void)connectButtonAction;
- (void)setStyleFromString:(id)a0;
- (void)showConfirmationWithTitle:(id)a0 animated:(BOOL)a1;

@end
