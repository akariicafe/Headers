@class RMUIInteractiveProfileFooterViewModel, NSString, RMUIInteractiveProfileToggleViewModel, RMModelDeclarationBase;

@interface RMUIProfileViewModel : NSObject

@property short symbol;
@property (retain) NSString *title;
@property (retain) NSString *value;
@property (retain) NSString *profileIdentifier;
@property (retain) RMModelDeclarationBase *declaration;
@property BOOL isInteractiveProfile;
@property (retain) NSString *interactiveDetailsText;
@property (retain) RMUIInteractiveProfileToggleViewModel *toggleViewModel;
@property (retain) RMUIInteractiveProfileFooterViewModel *footerViewModel;

- (id)init;
- (void).cxx_destruct;
- (void)clearModel;
- (void)setInteractiveProfileActive:(BOOL)a0 profileIdentifier:(id)a1;

@end
