@class UIStackView, CNAvatarView, NSArray, NSString, UIImageView, CNContact, CNPropertyGroupItem, CNAvatarImageRenderer, CNCardSharedProfileCellMenuButton, UILabel, CNSharedProfileStateOracle;
@protocol CNCardSharedProfileCellViewDelegate, CNAvatarImageRenderingScope;

@interface CNCardSharedProfileCellView : UIView <CNUILikenessCachingRendererDelegate>

@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIImageView *chevronImageView;
@property (retain, nonatomic) CNCardSharedProfileCellMenuButton *menuButton;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) CNAvatarImageRenderer *avatarImageRenderer;
@property (retain, nonatomic) id<CNAvatarImageRenderingScope> renderingScope;
@property (nonatomic) unsigned long long actionToPerformUponCacheInvalidation;
@property (retain, nonatomic) CNContact *contact;
@property (weak, nonatomic) id<CNCardSharedProfileCellViewDelegate> delegate;
@property (retain, nonatomic) CNPropertyGroupItem *propertyItem;
@property (retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)avatarCacheDidUpdateForIdentifiers:(id)a0;
- (id)init;
- (id)menuActions;
- (void)setupConstraints;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)updateAction;
- (id)customMenu;
- (void)setUpAvatarView;
- (id)sharedMenuTitle;
- (void)setUpMenuButton;
- (id)avatarImageForActionType:(unsigned long long)a0;
- (id)contactDisplayName;
- (void)invalidateAvatarCacheEntriesForContact:(id)a0;
- (void)performFallbackAction;
- (id)revertToCustomAction;
- (id)revertToPreviousAction;
- (void)setLabelTextAttributes:(id)a0;
- (void)setUpChevron;
- (void)setUpChevronAndMenuIfNeeded;
- (void)setUpLabels;
- (void)setupViews;
- (id)sharedMenu;
- (long long)sharedPhotoDisplayPreference;
- (BOOL)shouldShowMenu;
- (void)startObservingAvatarCacheInvalidation;
- (void)updateMenuButton;

@end
