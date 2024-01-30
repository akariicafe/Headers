@class NSArray, CKAvatarPickerViewController, CKConversation, _UINavigationBarTitleView, UIBarButtonItem;
@protocol CKNavigationBarTitleControllerDelegate;

@interface CKNavigationBarTitleController : NSObject

@property (readonly, nonatomic) CKConversation *conversation;
@property (readonly, nonatomic) CKAvatarPickerViewController *avatarPickerViewController;
@property (readonly, nonatomic) _UINavigationBarTitleView *titleView;
@property (readonly, nonatomic) NSArray *leftBarButtonItems;
@property (readonly, nonatomic) NSArray *rightBarButtonItems;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *deleteAllBarButtonItem;
@property (weak, nonatomic) id<CKNavigationBarTitleControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)_conversationList;
- (void)_editCancelButtonPressed;
- (void)_pressedAvatarView;
- (id)initWithConversation:(id)a0;

@end
