@class NSString;

@interface _UIPresentationControllerNullVisualStyleProvider : NSObject <_UIPresentationControllerVisualStyleProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)styleForAlertPresentationController:(id)a0;
- (id)styleForSheetPresentationController:(id)a0;
- (id)styleForPopoverPresentationController:(id)a0;
- (id)defaultStyleForPresentationController:(id)a0;
- (id)styleForRootPresentationController:(id)a0;

@end
