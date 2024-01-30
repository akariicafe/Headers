@class UINavigationController, NSString, UIBarButtonItem;
@protocol CNContactPickerContentDelegate;

@interface CNContactPickerServiceErrorViewController : CNErrorViewController <CNContactPickerContentViewController>

@property (weak, nonatomic) id<CNContactPickerContentDelegate> delegate;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
