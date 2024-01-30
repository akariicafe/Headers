@class CKConversation;
@protocol CKVisualIdentityPickerViewControllerDelegate;

@interface CKVisualIdentityPickerViewController : CNVisualIdentityPickerViewController <CNVisualIdentityPickerViewControllerDelegate>

@property (retain, nonatomic) CKConversation *conversation;
@property (weak, nonatomic) id<CKVisualIdentityPickerViewControllerDelegate> presentationDelegate;

+ (id)imagePickerForGroupIdentity:(id)a0 withConversation:(id)a1;
+ (id)imagePickerForContact:(id)a0;

- (void).cxx_destruct;
- (void)visualIdentityPickerDidCancel:(id)a0;
- (void)visualIdentityPicker:(id)a0 didUpdatePhotoForVisualIdentity:(id)a1 withContactImage:(id)a2;

@end
