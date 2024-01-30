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
@property (nonatomic) BOOL allowActivitySuppressionWhenSelected;
@property (readonly, nonatomic) unsigned long long editingMode;

+ (id)reuseIdentifier;
+ (id)checkmarkAccessoryView;
+ (id)_jitterXTranslationAnimation;
+ (id)_jitterYTranslationAnimation;
+ (id)_jitterRotationAnimation;
+ (id)unpinAccessoryView;

- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setEditingMode:(unsigned long long)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_viewConfigurationState;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)configurationState;
- (void)_updateZPositionForState:(unsigned long long)a0;
- (void)_updateActivitySupressionForState:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })checkboxFrame;
- (void)updateCheckboxAccessoryImageForCurrentLayoutStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unpinAccessoryViewFrame;
- (void)unpinButtonTapped:(id)a0;
- (void)updateUnpinAccessoryImageForCurrentLayoutStyle;
- (void)_createCheckboxAccessoryIfNecessary;
- (void)_createUnpinAccessoryIfNecessary;
- (double)accessorySizeForLayoutStyle:(long long)a0;
- (void)dragStateDidChange:(long long)a0;
- (void)_updateGhostedAppearance;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;

@end
