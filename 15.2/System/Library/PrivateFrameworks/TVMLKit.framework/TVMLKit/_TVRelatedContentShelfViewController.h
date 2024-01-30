@class _TVShelfViewController, NSString;

@interface _TVRelatedContentShelfViewController : UIViewController <__TVShelfViewControllerDelegate, TVAppTemplateImpressionable>

@property (retain, nonatomic) _TVShelfViewController *shelfViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (void)shelfViewController:(id)a0 updateRelatedView:(id)a1;

@end
