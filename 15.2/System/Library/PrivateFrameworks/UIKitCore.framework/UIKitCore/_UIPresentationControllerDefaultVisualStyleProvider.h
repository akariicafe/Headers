@class _UIPresentationControllerNullVisualStyleProvider, NSMutableDictionary, NSString;

@interface _UIPresentationControllerDefaultVisualStyleProvider : NSObject <_UIPresentationControllerVisualStyleProviding>

@property (retain, nonatomic) NSMutableDictionary *providerByIdiom;
@property (retain, nonatomic) _UIPresentationControllerNullVisualStyleProvider *fallbackProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)styleForAlertPresentationController:(id)a0;
- (id)styleForSheetPresentationController:(id)a0;
- (id)_providerForPresentationController:(id)a0;
- (void)registerVisualStyleProvider:(id)a0 forIdiom:(long long)a1;
- (void).cxx_destruct;
- (id)styleForPopoverPresentationController:(id)a0;
- (id)_init;
- (id)defaultStyleForPresentationController:(id)a0;
- (id)styleForRootPresentationController:(id)a0;

@end
