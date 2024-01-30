@class NSArray, NSString, MUGroupedActionsRowViewConfiguration, MUStackLayout;
@protocol MUPlaceCardActionsRowViewDelegate;

@interface MUGroupedActionsRowView : UIView <MUActionRowItemViewDelegate, MUActionRowItemViewModelObserver> {
    NSArray *_constraints;
    NSArray *_actionButtons;
    MUStackLayout *_stackLayout;
    MUGroupedActionsRowViewConfiguration *_configuration;
}

@property (readonly, nonatomic) long long preferredOrientation;
@property (readonly, nonatomic) long long preferredDistribution;
@property (weak, nonatomic) id<MUPlaceCardActionsRowViewDelegate> delegate;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) NSArray *actionButtons;
@property (copy, nonatomic) NSArray *viewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_updateLayoutIfNeeded;
- (void).cxx_destruct;
- (id)_itemViewForViewModel:(id)a0;
- (void)_setupStackLayout;
- (id)_viewModelForItemView:(id)a0;
- (void)actionRowItemPresentedMenu:(id)a0;
- (void)actionRowItemSelected:(id)a0;
- (void)actionRowItemViewModelDidUpdate:(id)a0;
- (void)createActionViews;

@end
