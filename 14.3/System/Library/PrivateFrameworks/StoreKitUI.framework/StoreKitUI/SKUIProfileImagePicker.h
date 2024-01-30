@class UIScrollView, NSString, SKUIClientContext, UIView, UILabel, UIImagePickerController;
@protocol SKUIProfileImagePickerDelegate;

@interface SKUIProfileImagePicker : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    SKUIClientContext *_clientContext;
    UIView *_contentView;
    UILabel *_descriptionLabel;
    BOOL _firstApperance;
    UIImagePickerController *_imagePicker;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
}

@property (weak, nonatomic) id<SKUIProfileImagePickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fixCropRect:(id)a0 forOriginalImage:(id)a1;

- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)loadView;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_didCancel;
- (void)_showImagePicker;
- (void)_showImageSourcePicker;
- (void)_presentImagePickerWithSourceType:(long long)a0;

@end
