@class PXPhotosViewModel, NSDictionary, NSMapTable;

@interface PXPhotosGridActionManager : PXActionManager

@property (readonly, weak, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) NSDictionary *actionPerformersByType;
@property (readonly, nonatomic) NSMapTable *actionTypeByBarButtonItem;

+ (id)actionsWithActionPerformers;

- (id)initWithViewModel:(id)a0;
- (void)_handleBarButtonItem:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)barButtonItemForActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)alertActionForActionType:(id)a0;
- (BOOL)canPerformActionType:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsActionType:(id)a0;
- (id)init;
- (id)standardActionForActionType:(id)a0;
- (id)activityForActionType:(id)a0;

@end
