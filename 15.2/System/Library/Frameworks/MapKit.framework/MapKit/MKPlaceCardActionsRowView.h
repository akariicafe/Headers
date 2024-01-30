@class NSArray;
@protocol _MKPlaceViewControllerDelegate, MKPlaceActionManagerProtocol;

@interface MKPlaceCardActionsRowView : UIView <MKActionRowItemViewDelegate> {
    NSArray *_constraints;
    NSArray *_actionRowsArray;
    unsigned long long _maxButtonsPerRow;
    unsigned long long _style;
}

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) id<MKPlaceActionManagerProtocol> actionManager;
@property (weak, nonatomic) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;
@property (readonly, nonatomic) NSArray *actionButtons;
@property (nonatomic) Class buttonBackgroundViewClass;

- (void)actionRowSelected:(id)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)createActions;
- (void)createActionViews;
- (unsigned long long)maxButtonsPerRow;
- (void)layoutButtons;
- (void)invalidateActionButtons;
- (void)actionButtonPressed:(id)a0;
- (void)infoCardThemeChanged;
- (void)createConstraints;

@end
