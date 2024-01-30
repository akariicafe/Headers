@class UIFont, PHFace, UIImageView, UITextField, NSString, NSMutableArray, PHPerson;

@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver>

@property (readonly, nonatomic) NSMutableArray *fetchResults;
@property (readonly, nonatomic) UIImageView *avatarView;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PHFace *face;
@property (readonly, nonatomic) UITextField *nameField;
@property (copy, nonatomic) NSString *localizedName;
@property (retain, nonatomic) UIFont *nameFont;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIFont *placeholderFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 person:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 face:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 person:(id)a1 face:(id)a2;
- (void)finishEditing;
- (void)resetImages;
- (void)_updateFieldText;
- (void)_updateFieldPlaceholder;

@end
