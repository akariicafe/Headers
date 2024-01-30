@class CNContact, UIAlertController, NSString, CNContactActionsController;
@protocol CNUIFavoritesEntryPickerDelegate;

@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsControllerDelegate>

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (weak, nonatomic) id<CNUIFavoritesEntryPickerDelegate> delegate;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

@end
