@class _TVImageView, VUILabel, VUITextLayout, NSArray, NSString;
@protocol VUISeasonPickerButtonDelegate;

@interface VUISeasonPickerButton : UIControl <UIContextMenuInteractionDelegate>

@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) VUILabel *currentLabel;
@property (retain, nonatomic) VUILabel *altLabel;
@property (retain, nonatomic) _TVImageView *chevronDownImageView;
@property (retain, nonatomic) VUITextLayout *buttonTextLayout;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSArray *seasonTitles;
@property (weak, nonatomic) id<VUISeasonPickerButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configureWithExistingView:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)layoutSubviews;
- (void)_buttonTapped:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (void)_updateLabelsWithSeasonTitles:(id)a0;
- (BOOL)_contextMenuDropDownIsEnabled;
- (void)_setActionsWithSeasonTitles:(id)a0;
- (void)switchToIndex:(unsigned long long)a0;

@end
