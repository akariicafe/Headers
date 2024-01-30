@interface _UIDiffableDataSourceSectionControllerHandlersInternal : _UIDiffableDataSourceSectionControllerHandlers

@property (copy, nonatomic) id /* block */ shouldExpandItemHandler;
@property (copy, nonatomic) id /* block */ willExpandItemHandler;
@property (copy, nonatomic) id /* block */ shouldCollapseItemHandler;
@property (copy, nonatomic) id /* block */ willCollapseItemHandler;
@property (copy, nonatomic) id /* block */ childSnapshotForExpandingParentHandler;

@end
