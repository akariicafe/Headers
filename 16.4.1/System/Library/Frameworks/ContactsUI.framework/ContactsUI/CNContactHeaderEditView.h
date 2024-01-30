@class UIButton, NSLayoutConstraint;

@interface CNContactHeaderEditView : CNContactHeaderView

@property (nonatomic) struct CGSize { double width; double height; } maxButtonSize;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) NSLayoutConstraint *editButtonHeightConstraint;
@property (nonatomic) BOOL allowsEditPhoto;

+ (id)sizeAttributesShowingNavBar:(BOOL)a0;
+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)a0 shouldAllowImageDrops:(BOOL)a1 monogramOnly:(BOOL)a2;
+ (id)contactHeaderViewWithContact:(id)a0 shouldAllowTakePhotoAction:(BOOL)a1 monogramOnly:(BOOL)a2 delegate:(id)a3;
+ (id)contactHeaderViewWithContact:(id)a0 shouldAllowTakePhotoAction:(BOOL)a1 showingNavBar:(BOOL)a2 monogramOnly:(BOOL)a3 delegate:(id)a4;

- (double)maxHeight;
- (void)updateConstraints;
- (void)editButtonPressed;
- (void).cxx_destruct;
- (BOOL)hasPhoto;
- (BOOL)photoIsModified;
- (void)updateFontSizes;
- (void)calculateLabelSizesIfNeeded;
- (double)defaultMaxHeight;
- (void)didFinishUsing;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldAllowTakePhotoAction:(BOOL)a2 delegate:(id)a3 showingNavBar:(BOOL)a4 monogramOnly:(BOOL)a5;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldAllowTakePhotoAction:(BOOL)a2 showingNavBar:(BOOL)a3 monogramOnly:(BOOL)a4 delegate:(id)a5;
- (void)presentAvatarPickerWithImageData:(id)a0;
- (void)saveContactPhoto;
- (void)setAllowsEditPhoto:(BOOL)a0 preservingChanges:(BOOL)a1;
- (void)updateContactWithEditedPropertyItem:(id)a0;
- (void)updateEditButtonTitle;
- (void)updateSizeDependentAttributes;
- (void)updateWithContacts:(id)a0;

@end
