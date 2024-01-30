@interface _UIDiffableDataSourceSectionControllerHandlers : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ shouldExpandItemHandler;
@property (copy, nonatomic) id /* block */ willExpandItemHandler;
@property (copy, nonatomic) id /* block */ shouldCollapseItemHandler;
@property (copy, nonatomic) id /* block */ willCollapseItemHandler;
@property (copy, nonatomic) id /* block */ childSnapshotForExpandingParentHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
