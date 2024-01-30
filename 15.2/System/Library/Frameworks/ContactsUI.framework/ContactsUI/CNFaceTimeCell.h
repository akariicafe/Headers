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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)performAction:(id)a0;
- (id)labelView;
- (void).cxx_destruct;
- (double)minCellHeight;
- (id)rightMostView;
- (id)variableConstraints;
- (void)processModels:(id)a0;
- (void)loadCachedActions;
- (void)contactActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (BOOL)actionViewShouldPresentDisambiguationUI:(id)a0;
- (void)didPressActionView:(id)a0 longPress:(BOOL)a1;
- (void)discoverAvailableActionTypes;
- (id)allModelsObservable;
- (id)actionViewForType:(id)a0;
- (id)constantConstraints;
- (void)updateHorizontalTouchAreas;
- (void)didSelectActionType:(id)a0 withSourceView:(id)a1 longPress:(BOOL)a2;
- (void)tintColorDidChange;
- (void)reset;
- (void)performDefaultAction;

@end
