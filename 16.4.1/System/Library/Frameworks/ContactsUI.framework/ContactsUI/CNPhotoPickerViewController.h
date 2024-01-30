@class NSString, CNMutableContact;
@protocol CNPhotoPickerViewControllerDelegate;

@interface CNPhotoPickerViewController : CNVisualIdentityPickerViewController

@property (retain, nonatomic) CNMutableContact *pendingEditContact;
@property (retain, nonatomic) NSString *assignActionTitleOverride;
@property (weak, nonatomic) id<CNPhotoPickerViewControllerDelegate> delegate;

+ (id)navigationControllerForPicker:(id)a0;
+ (id)log;
+ (id)photoPickerForGameCenterWithContact:(id)a0;
+ (BOOL)canShowAvatarEditor;

- (id)contactViewCache;
- (void)done:(id)a0;
- (void)cancel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 style:(id)a1 configuration:(id)a2;
- (void)photoView:(id)a0 didAcceptDropOfImageData:(id)a1;
- (void)photoViewDidUpdate:(id)a0;
- (void)updateHeaderViewAvatar;
- (void)updatePendingEditContact;
- (id)viewControllerForPhotoView:(id)a0;

@end
