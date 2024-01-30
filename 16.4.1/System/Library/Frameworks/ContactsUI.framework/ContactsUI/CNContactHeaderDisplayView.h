@class UIView, CNGeminiResult, CNContactGeminiView, NSString, CNContactDowntimeView, NSDictionary, CNGeminiPickerController, NSLayoutConstraint, UILabel, CNContactFormatter;

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNPickerControllerDelegate, UINavigationControllerDelegate, CNUIReusableView> {
    NSDictionary *_taglineTextAttributes;
    NSDictionary *_downtimeTextAttributes;
    NSDictionary *_geminiTextAttributes;
}

@property (retain, nonatomic) UIView *personHeaderView;
@property (retain) UILabel *taglineLabel;
@property (retain, nonatomic) UILabel *importantLabel;
@property (retain, nonatomic) CNContactDowntimeView *downtimeView;
@property (nonatomic) double minLabelsHeight;
@property (nonatomic) double maxLabelsHeight;
@property (retain) NSLayoutConstraint *avatarNameSpacingConstraint;
@property (retain) CNContactGeminiView *geminiView;
@property (retain) CNGeminiResult *geminiResult;
@property (retain, nonatomic) CNGeminiPickerController *geminiPicker;
@property (nonatomic) BOOL shouldShowGemini;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (copy, nonatomic) NSDictionary *taglineTextAttributes;
@property (copy, nonatomic) NSDictionary *importantTextAttributes;
@property (retain, nonatomic) NSString *alternateName;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *importantMessage;
@property (nonatomic) unsigned long long avatarStyle;
@property (nonatomic) BOOL isEmergencyContact;
@property (nonatomic) BOOL isRestrictedContact;
@property (nonatomic) BOOL isDowntimeContact;
@property (nonatomic) BOOL allowsPickerActions;
@property (nonatomic) BOOL usesBrandedCallFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeysForContactFormatter:(id)a0;
+ (id)contactHeaderViewWithContact:(id)a0 allowsPhotoDrops:(BOOL)a1 showingNavBar:(BOOL)a2 monogramOnly:(BOOL)a3 delegate:(id)a4;
+ (id)sizeAttributesShowingNavBar:(BOOL)a0;
+ (id)contactHeaderViewWithContact:(id)a0 showingNavBar:(BOOL)a1 monogramOnly:(BOOL)a2 delegate:(id)a3;
+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)a0 shouldAllowImageDrops:(BOOL)a1 monogramOnly:(BOOL)a2;

- (double)minHeight;
- (double)maxHeight;
- (id)descriptorForRequiredKeys;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)updateFontSizes;
- (id)_headerStringForContacts:(id)a0;
- (id)_importantString;
- (id)_taglineStringForContacts:(id)a0;
- (void)_updateDowntimeView;
- (void)_updateImportantLabel;
- (void)_updatePhotoView;
- (void)calculateLabelSizes;
- (void)calculateLabelSizesIfNeeded;
- (void)createGeminiViewIfNeeded;
- (double)defaultMaxHeight;
- (void)didFinishUsing;
- (void)disablePhotoTapGesture;
- (id)downtimeTextAttributes;
- (id)geminiTextAttributes;
- (void)handleGeminiViewTouch:(id)a0;
- (void)handleNameLabelLongPress:(id)a0;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldAllowImageDrops:(BOOL)a2 showingNavBar:(BOOL)a3 monogramOnly:(BOOL)a4 delegate:(id)a5;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showingNavBar:(BOOL)a2 monogramOnly:(BOOL)a3 delegate:(id)a4;
- (void)menuWillHide:(id)a0;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;
- (void)reloadDataPreservingChanges:(BOOL)a0;
- (void)setDowntimeTextAttributes:(id)a0;
- (void)setGeminiTextAttributes:(id)a0;
- (void)setNameTextAttributes:(id)a0;
- (void)updateGeminiResult:(id)a0;
- (void)updateSizeDependentAttributes;

@end
