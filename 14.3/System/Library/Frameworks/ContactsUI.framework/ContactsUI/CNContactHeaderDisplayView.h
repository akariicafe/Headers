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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makePhotoViewWithMonogrammerStyle:(long long)a0 shouldAllowTakePhotoAction:(BOOL)a1 shouldAllowImageDrops:(BOOL)a2 monogramOnly:(BOOL)a3;
+ (id)sizeAttributesShowingNavBar:(BOOL)a0;
+ (id)descriptorForRequiredKeysForContactFormatter:(id)a0;
+ (id)contactHeaderViewWithContact:(id)a0 showingNavBar:(BOOL)a1 monogramOnly:(BOOL)a2 delegate:(id)a3;
+ (id)contactHeaderViewWithContact:(id)a0 allowsPhotoDrops:(BOOL)a1 showingNavBar:(BOOL)a2 monogramOnly:(BOOL)a3 delegate:(id)a4;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 monogrammerStyle:(long long)a2 shouldAllowImageDrops:(BOOL)a3 showingNavBar:(BOOL)a4 monogramOnly:(BOOL)a5 delegate:(id)a6;
- (void)copy:(id)a0;
- (void)tintColorDidChange;
- (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)menuWillHide:(id)a0;
- (void)setNameTextAttributes:(id)a0;
- (id)_headerStringForContacts:(id)a0;
- (id)_taglineStringForContacts:(id)a0;
- (void)handleNameLabelLongPress:(id)a0;
- (void)reloadDataPreservingChanges:(BOOL)a0;
- (void)layoutSubviews;
- (double)minHeight;
- (double)maxHeight;
- (double)defaultMaxHeight;
- (void)calculateLabelSizesIfNeeded;
- (void)didFinishUsing;
- (void)updateSizeDependentAttributes;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showingNavBar:(BOOL)a2 monogramOnly:(BOOL)a3 delegate:(id)a4;
- (void)createGeminiViewIfNeeded;
- (void)calculateLabelSizes;
- (void)disablePhotoTapGesture;
- (void)setDowntimeTextAttributes:(id)a0;
- (id)downtimeTextAttributes;
- (void)setGeminiTextAttributes:(id)a0;
- (id)geminiTextAttributes;
- (void)_updatePhotoView;
- (void)_updateDowntimeView;
- (void)_updateImportantLabel;
- (void)updateGeminiResult:(id)a0;
- (id)_importantString;
- (void)handleGeminiViewTouch:(id)a0;

@end
