@class NSString, UIImage;

@interface MFConfirmationButton : MFDimmableButton

@property (copy, nonatomic) id /* block */ handlerBlock;
@property (nonatomic) BOOL hasPresentedConfirmation;
@property (nonatomic) unsigned long long confirmationType;
@property (nonatomic) unsigned long long confirmationSelectionMode;
@property (copy, nonatomic) NSString *confirmationMessage;
@property (copy, nonatomic) NSString *confirmationLabel;
@property (retain, nonatomic) UIImage *confirmationIcon;

+ (id)confirmationButtonWithMessage:(id)a0 confirmationLabel:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)reset;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)setSelected:(BOOL)a0;
- (void)_didConfirm;
- (void)_updateButtonAction;
- (BOOL)_isInConfirmableState;
- (id)_confirmationMenu;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;

@end
