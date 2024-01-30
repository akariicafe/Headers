@class NSProgress, UILabel, SFAirDropNode, SFCircleProgressView, NSObject, UIView, UISelectionFeedbackGenerator, NSString, NSLayoutConstraint, UIColor, SFPersonImageView, NSArray, UINotificationFeedbackGenerator, UIImpactFeedbackGenerator;
@protocol SFPersonCollectionViewCellDelegate;

@interface SFPersonCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) SFPersonImageView *imageView;
@property (retain, nonatomic) UIView *badgedContactView;
@property (retain, nonatomic) SFCircleProgressView *circleProgressView;
@property (retain, nonatomic) id progressToken;
@property (retain, nonatomic) NSArray *progressKeyPaths;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) NSArray *secondLabelVisibleConstraintsArray;
@property (retain, nonatomic) UIColor *fadedSecondLabelColor;
@property (retain, nonatomic) UILabel *labelForPositioning;
@property (retain, nonatomic) UINotificationFeedbackGenerator *notificationHaptic;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionHaptic;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactHaptic;
@property (retain, nonatomic) NSLayoutConstraint *secondLabelFBConstraint;
@property (retain, nonatomic) NSLayoutConstraint *cellWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *chickletToTitleSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *nameFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *largeTextNameCenterYConstraint;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) BOOL darkStyleOnLegacyApp;
@property (retain, nonatomic) SFAirDropNode *person;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) long long cellState;
@property (nonatomic) BOOL stateBeingRestored;
@property (retain, nonatomic) NSString *sessionID;
@property (weak, nonatomic) NSObject<SFPersonCollectionViewCellDelegate> *delegate;
@property (nonatomic) double activitySheetWidth;

+ (struct CGSize { double x0; double x1; })_cachedPreferredItemSizeForViewWidth:(double)a0 sizeCategory:(id)a1;
+ (struct CGSize { double x0; double x1; })_cachedPreferredItemSizeForString:(id)a0 viewWidth:(double)a1 sizeCategory:(id)a2;

- (void)setupConstraints;
- (void)setupConstraintsYukon;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)userDidCancel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateNameLabel;
- (void)resetTransferState;
- (void)userDidSelect;
- (void)setSecondLabelText:(id)a0 withTextColor:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)restoreCellStateFromFinalTransferState:(long long)a0;
- (struct CGSize { double x0; double x1; })calculatedContentSizeForSheetWidth:(double)a0 sizeCategory:(id)a1;
- (void)prepareHapticsPreWarm:(BOOL)a0;
- (void)deactivateHaptics;
- (void)removeObserverOfValuesForKeyPaths:(id)a0 ofObject:(id)a1;
- (void)addObserverOfValuesForKeyPaths:(id)a0 ofObject:(id)a1;
- (void)updatePersonIconView;
- (void)triggerKVOForKeyPaths:(id)a0 ofObject:(id)a1;
- (void)setCellState:(long long)a0 animated:(BOOL)a1 silent:(BOOL)a2;
- (void)prepareHaptics;
- (void)fireHapticsForState:(long long)a0;
- (void)handleKVOUpdateForPerson:(id)a0 keyPath:(id)a1;
- (void)handleKVOUpdateForProgress:(id)a0 keyPath:(id)a1;

@end
