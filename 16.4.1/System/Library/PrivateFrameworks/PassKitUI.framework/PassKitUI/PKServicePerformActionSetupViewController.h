@class NSString;

@interface PKServicePerformActionSetupViewController : UIViewController <PKServicePerformActionSetupViewControllerProtocol, PKPerformActionViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)dismiss;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithPassUniqueIdentifier:(id)a0 actionType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)performActionViewControllerDidPerformAction:(id)a0;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
