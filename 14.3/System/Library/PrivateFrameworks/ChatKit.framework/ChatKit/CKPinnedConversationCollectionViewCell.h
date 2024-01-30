@class CKConversationListAccessoryView, NSObject, CKPinnedConversationView;
@protocol CKPinnedConversationCollectionViewCellDelegate;

@interface CKPinnedConversationCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKPinnedConversationView *pinnedConversationView;
@property (nonatomic, setter=setShowingUnpinAccessory:) BOOL isShowingUnpinAccessory;
@property (retain, nonatomic) CKConversationListAccessoryView *unpinAccessoryView;
@property (nonatomic, setter=setShowingCheckboxAccessory:) BOOL isShowingCheckboxAccessory;
@property (retain, nonatomic) CKConversationListAccessoryView *checkboxAccessoryView;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic, setter=setJittering:) BOOL isJittering;
@property (nonatomic) BOOL isPreparingForReuse;
@property (weak, nonatomic) NSObject<CKPinnedConversationCollectionViewCellDelegate> *delegate;
@property (nonatomic) BOOL showsBackgroundViewWhenSelected;
@property (readonly, nonatomic) unsigned long long editingMode;

+ (id)_jitterYTranslationAnimation;
+ (id)_jitterXTranslationAnimation;
+ (id)unpinAccessoryView;
+ (id)checkmarkAccessoryView;
+ (id)_jitterRotationAnimation;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)setEditingMode:(unsigned long long)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (id)configurationState;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (unsigned long long)_viewConfigurationState;
- (void)_updateGhostedAppearance;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dragStateDidChange:(long long)a0;
- (void)_updateActivitySupressionForState:(unsigned long long)a0;
- (void)_updateZPositionForState:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })checkboxFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unpinAccessoryViewFrame;
- (void)updateCheckboxAccessoryImageForCurrentLayoutStyle;
- (void)unpinButtonTapped:(id)a0;
- (void)updateUnpinAccessoryImageForCurrentLayoutStyle;
- (void)_createCheckboxAccessoryIfNecessary;
- (void)_createUnpinAccessoryIfNecessary;
- (double)accessorySizeForLayoutStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
