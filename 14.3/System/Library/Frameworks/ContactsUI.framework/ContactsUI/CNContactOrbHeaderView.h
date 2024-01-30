@class UIView, NSString, NSArray, NSDictionary, NSMutableArray, CNContactPhotoView, UILabel, CNContactFormatter;

@interface CNContactOrbHeaderView : UIView

@property (retain, nonatomic) NSMutableArray *headerConstraints;
@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSDictionary *nameTextAttributes;
@property (copy, nonatomic) NSDictionary *taglineTextAttributes;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *taglineLabel;
@property (retain, nonatomic) UILabel *fakeTaglineAlignmentLabel;
@property (retain, nonatomic) UIView *markerView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentMargins;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) NSString *alternateName;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) BOOL centersPhotoAndLabels;
@property (readonly, nonatomic) double photoLabelSpacing;
@property (readonly, nonatomic) CNContactPhotoView *photoView;
@property (nonatomic) BOOL alwaysShowsMonogram;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)descriptorForRequiredKeysForContactFormatter:(id)a0 includingAvatarViewDescriptors:(BOOL)a1;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)a0;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)reloadData;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)copy:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 monogrammerStyle:(long long)a2;
- (void)updateWithContacts:(id)a0;
- (void)updateFontSizes;
- (void)menuWillHide:(id)a0;
- (id)_headerStringForContacts:(id)a0;
- (id)_taglineStringForContacts:(id)a0;
- (void)handleNameLabelLongPress:(id)a0;
- (BOOL)canBecomeFirstResponder;

@end
