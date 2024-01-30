@interface CNContactQuickActionsDisambiguationMenuPresentation : NSObject

@property (class, readonly, nonatomic) CNContactQuickActionsDisambiguationMenuPresentation *defaultPresentation;
@property (class, readonly, nonatomic) CNContactQuickActionsDisambiguationMenuPresentation *modalPresentation;
@property (class, readonly, nonatomic) CNContactQuickActionsDisambiguationMenuPresentation *alertSheetPresentation;

- (id)initBase;
- (id)viewControllerForPresentingActionsController:(id)a0 fromView:(id)a1 dismissDisambiguationMenuHandler:(id /* block */)a2;

@end
