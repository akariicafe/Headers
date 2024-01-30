@interface _UIDiffableDataSourceSectionControllerHandlers : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ shouldExpandItemHandler;
@property (copy, nonatomic) id /* block */ willExpandItemHandler;
@property (copy, nonatomic) id /* block */ shouldCollapseItemHandler;
@property (copy, nonatomic) id /* block */ willCollapseItemHandler;
@property (copy, nonatomic) id /* block */ childSnapshotForExpandingParentHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
