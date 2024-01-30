@class _TVShelfViewController, NSString;

@interface _TVRelatedContentShelfViewController : UIViewController <__TVShelfViewControllerDelegate, TVAppTemplateImpressionable>

@property (retain, nonatomic) _TVShelfViewController *shelfViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)loadView;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (void)shelfViewController:(id)a0 updateRelatedView:(id)a1;

@end
