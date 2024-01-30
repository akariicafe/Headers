@class NSString, CNMutableContact;
@protocol CNPhotoPickerViewControllerDelegate;

@interface CNPhotoPickerViewController : CNVisualIdentityPickerViewController

@property (retain, nonatomic) CNMutableContact *pendingEditContact;
@property (retain, nonatomic) NSString *assignActionTitleOverride;
@property (weak, nonatomic) id<CNPhotoPickerViewControllerDelegate> delegate;

+ (id)log;
+ (id)photoPickerForGameCenterWithContact:(id)a0;
+ (BOOL)canShowAvatarEditor;
+ (id)navigationControllerForPicker:(id)a0;

- (void)cancel:(id)a0;
- (void)photoViewDidUpdate:(id)a0;
- (void)photoView:(id)a0 didSaveImageDropToContact:(id)a1;
- (id)viewControllerForPhotoView:(id)a0;
- (void).cxx_destruct;
- (void)updatePendingEditContact;
- (id)initWithContact:(id)a0 style:(id)a1 configuration:(id)a2;
- (void)done:(id)a0;
- (void)updateHeaderViewAvatar;
- (id)contactViewCache;

@end
