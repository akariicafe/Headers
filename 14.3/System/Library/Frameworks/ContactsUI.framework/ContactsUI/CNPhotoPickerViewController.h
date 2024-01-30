@class NSString, CNMutableContact;
@protocol CNPhotoPickerViewControllerDelegate;

@interface CNPhotoPickerViewController : CNVisualIdentityPickerViewController

@property (retain, nonatomic) CNMutableContact *pendingEditContact;
@property (retain, nonatomic) NSString *assignActionTitleOverride;
@property (weak, nonatomic) id<CNPhotoPickerViewControllerDelegate> delegate;

+ (BOOL)canShowAvatarEditor;
+ (id)navigationControllerForPicker:(id)a0;
+ (id)photoPickerForGameCenterWithContact:(id)a0;
+ (id)log;

- (void)cancel:(id)a0;
- (void).cxx_destruct;
- (void)updateHeaderViewAvatar;
- (void)done:(id)a0;
- (id)contactViewCache;
- (void)updatePendingEditContact;
- (id)initWithContact:(id)a0 style:(id)a1 configuration:(id)a2;
- (void)photoViewDidUpdate:(id)a0;
- (void)photoView:(id)a0 didSaveImageDropToContact:(id)a1;
- (id)viewControllerForPhotoView:(id)a0;

@end
