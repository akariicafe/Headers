@class NSString;

@interface WFComposeNavigationBarTitleContentView : UIView {
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, readonly) NSString *placeholderName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)finishRenamingIfNecessary;
- (void)updatePlaceholderIfNecessary;

@end
