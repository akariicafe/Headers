@class UIStackView, NSArray, PKPaletteOptionSwitchCell, PKPaletteOptionButtonCell, UITraitCollection;
@protocol PKPaletteMoreOptionsViewControllerDelegate;

@interface PKPaletteMoreOptionsViewController : UIViewController

@property (retain, nonatomic) UITraitCollection *externalTraitCollection;
@property (retain, nonatomic) NSArray *stackViewPositioningConstraints;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteOptionSwitchCell *autoMinimizeCell;
@property (retain, nonatomic) PKPaletteOptionSwitchCell *shapesCell;
@property (retain, nonatomic) PKPaletteOptionSwitchCell *fingerDrawsCell;
@property (retain, nonatomic) PKPaletteOptionButtonCell *tapToRadarCell;
@property (retain, nonatomic) PKPaletteOptionButtonCell *openPencilSettingsCell;
@property (weak, nonatomic) id<PKPaletteMoreOptionsViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldShowAutoMinimizeOption;
@property (nonatomic) BOOL shouldShowFingerDrawsOption;
@property (nonatomic, getter=isAutoHideOn) BOOL autoHideOn;
@property (nonatomic) BOOL isFingerDrawsOn;
@property (nonatomic) BOOL shouldShowTapToRadarOption;
@property (nonatomic) BOOL shouldShowOpenPencilSettingsOption;

- (void).cxx_destruct;
- (void)_updateContentSize;
- (void)_reloadItems;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_updateAutoMinimizeCell;
- (void)_autoMinimizeCellDidChangeValue:(id)a0;
- (void)_fingerDrawsCellDidChangeValue:(id)a0;
- (void)_updateFingerDrawsCell;
- (void)_handleTapToRadarCellTapped;
- (BOOL)_isCellInstalled:(id)a0;
- (void)_handleOpenPencilSettingsCellTapped;
- (id)_makeAutoMinimizeCell;
- (void)_installCell:(id)a0;
- (void)_removeCell:(id)a0;
- (BOOL)_shouldInstallTapToRadarCell;
- (id)_makeTapToRadarCell;
- (BOOL)_shouldRemoveTapToRadarCell;
- (BOOL)_shouldInstallOpenPencilSettingsCell;
- (id)_makeOpenPencilSettingsCell;
- (BOOL)_shouldRemoveOpenPencilSettingsCell;
- (double)_contentSizeMinWidth;
- (void)updateUIForTraitCollection:(id)a0;

@end
