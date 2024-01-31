@class CNContact, NSString, NSArray, CNActionMenuHelper, NSDictionary, CNContactActionsController, CNActionView, CNUIUserActionListDataSource, UIContextMenuInteraction, UILabel;
@protocol CNSchedulerProvider, CNCustomPresentation, CNPropertyCellDelegate;

@interface CNFaceTimeCell : CNLabeledCell <CNActionViewDelegate, CNUIUserActionListConsumer, CNContactActionsControllerDelegate>

@property (readonly, nonatomic) UILabel *faceTimeLabel;
@property (nonatomic) BOOL isFaceTimeAudioAvailable;
@property (readonly, nonatomic) CNActionView *actionView1;
@property (readonly, nonatomic) CNActionView *actionView2;
@property (retain, nonatomic) NSArray *supportedActionTypes;
@property (retain, nonatomic) id<CNCustomPresentation> actionsControllerPresentation;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (copy, nonatomic) NSArray *tokens;
@property (retain, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) double throttleDelay;
@property (copy, nonatomic) NSDictionary *defaultActionPerType;
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)labelView;
- (void)reset;
- (void)performAction:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)actionViewForType:(id)a0;
- (BOOL)actionViewShouldPresentDisambiguationUI:(id)a0;
- (id)allModelsObservable;
- (id)constantConstraints;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (void)contactActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (void)didPressActionView:(id)a0 longPress:(BOOL)a1;
- (void)didSelectActionType:(id)a0 withSourceView:(id)a1 longPress:(BOOL)a2;
- (void)discoverAvailableActionTypes;
- (void)loadCachedActions;
- (double)minCellHeight;
- (void)performDefaultAction;
- (void)processModels:(id)a0;
- (id)rightMostView;
- (void)updateHorizontalTouchAreas;
- (id)variableConstraints;

@end
