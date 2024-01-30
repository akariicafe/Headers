@class NSString, _UNNotificationContact;
@protocol NCCreateContactNavigationViewControllerDelegate;

@interface NCCreateContactNavigationViewController : UINavigationController <CNContactViewControllerDelegate> {
    _UNNotificationContact *_contact;
    NSString *_bundleIdentifier;
}

@property (weak, nonatomic) id<NCCreateContactNavigationViewControllerDelegate> createContactDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)navigationControllerWithContact:(id)a0 bundleIdentifier:(id)a1 imageData:(id)a2 createContactDelegate:(id)a3;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (id)_initWithContact:(id)a0 bundleIdentifier:(id)a1 imageData:(id)a2 createContactDelegate:(id)a3;
- (void)_cancelAddToContacts:(id)a0;

@end
