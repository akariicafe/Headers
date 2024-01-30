@class UIFont, NSString, UIImageView, UITextField, NSMutableArray, PHPerson;

@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver>

@property (retain, nonatomic) NSMutableArray *fetchResults;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) PHPerson *person;
@property (readonly, nonatomic) UITextField *nameField;
@property (copy, nonatomic) NSString *localizedName;
@property (retain, nonatomic) UIFont *nameFont;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIFont *placeholderFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finishEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 person:(id)a1;
- (void)resetImages;
- (void)_updateFieldText;
- (void)_updateFieldPlaceholder;

@end
