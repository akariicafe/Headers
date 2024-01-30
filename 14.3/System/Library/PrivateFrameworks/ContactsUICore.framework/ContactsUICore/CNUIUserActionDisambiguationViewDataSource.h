@class NSString;

@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource <CNUIUserActionDisambiguationViewDataSource>

@property (nonatomic) BOOL tracksChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)categoriesForContactActionsView:(id)a0;
- (id)contactActionsView:(id)a0 imageForActionCategory:(id)a1;

@end
