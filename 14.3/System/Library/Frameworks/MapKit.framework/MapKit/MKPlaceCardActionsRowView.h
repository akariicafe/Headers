@class NSArray, UILayoutGuide;
@protocol _MKPlaceViewControllerDelegate, MKPlaceActionManagerProtocol;

@interface MKPlaceCardActionsRowView : UIView <MKActionRowItemViewDelegate> {
    NSArray *_actionButtons;
    NSArray *_constraints;
    NSArray *_actionRowsArray;
    unsigned long long _maxButtonsPerRow;
    unsigned long long _style;
    UILayoutGuide *_marginLayoutguide;
}

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) id<MKPlaceActionManagerProtocol> actionManager;
@property (weak, nonatomic) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;

- (id)initWithStyle:(unsigned long long)a0;
- (void)createConstraints;
- (void).cxx_destruct;
- (void)actionRowSelected:(id)a0;
- (void)createActions;
- (void)createActionViews;
- (unsigned long long)maxButtonsPerRow;
- (void)layoutButtons;
- (void)invalidateActionButtons;
- (void)infoCardThemeChanged;

@end
