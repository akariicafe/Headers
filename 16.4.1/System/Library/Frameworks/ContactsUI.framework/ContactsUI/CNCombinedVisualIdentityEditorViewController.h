@class NSString, UISegmentedControl, CNVisualIdentityAvatarStyleEditorViewController, CNPhotoPickerDataSource;
@protocol CNVisualIdentityItemEditorViewControllerDelegate;

@interface CNCombinedVisualIdentityEditorViewController : UIViewController <CNVisualIdentityAvatarStyleEditorViewControllerDelegate>

@property (retain, nonatomic) CNPhotoPickerDataSource *dataSource;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) CNVisualIdentityAvatarStyleEditorViewController *textEditor;
@property (retain, nonatomic) CNVisualIdentityAvatarStyleEditorViewController *emojiEditor;
@property (retain, nonatomic) CNVisualIdentityAvatarStyleEditorViewController *selectedEditor;
@property (weak, nonatomic) id<CNVisualIdentityItemEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_newStyleEditorWithItem:(id)a0;
- (void)_segmentedControlDidChange:(id)a0;
- (void)_updateEditorsVisibility;
- (void)avatarStyleEditor:(id)a0 didUpdateItem:(id)a1;
- (void)didTapCancel;
- (void)didTapDone;
- (id)initWithProviderItem:(id)a0 dataSource:(id)a1;
- (void)setupBarButtonItems;
- (void)setupEditors;
- (void)setupSegmentedControl;
- (void)updateDoneButtonEnabledState;
- (id)updatedProviderItem;

@end
