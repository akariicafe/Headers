@class NSString, _UISheetPresentationMetrics;

@interface _UIPresentationControllerNullVisualStyleProvider : NSObject <_UIPresentationControllerVisualStyleProviding>

@property (readonly, nonatomic) _UISheetPresentationMetrics *defaultSheetMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)styleForAlertPresentationController:(id)a0;
- (id)defaultStyleForPresentationController:(id)a0;
- (long long)defaultConcreteTransitionStyleForViewController:(id)a0;
- (long long)defaultConcretePresentationStyleForViewController:(id)a0;
- (id)styleForSheetPresentationController:(id)a0;
- (id)styleForSearchPresentationController:(id)a0;
- (id)styleForPopoverPresentationController:(id)a0;
- (id)styleForRootPresentationController:(id)a0;

@end
