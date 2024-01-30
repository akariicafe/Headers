@class NSString, PKAddPassesViewController;

@interface SFAddPKPassesViewController : UIViewController <PKAddPassesViewControllerDelegate> {
    PKAddPassesViewController *_passesViewController;
    id /* block */ _dismissalHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
