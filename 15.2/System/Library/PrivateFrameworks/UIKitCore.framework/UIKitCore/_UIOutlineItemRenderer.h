@interface _UIOutlineItemRenderer : _UIDiffableDataSourceItemRenderer

@property (copy, nonatomic) id /* block */ willUpdateCellHandler;

- (id)initWithIdentifier:(id)a0 cellClass:(Class)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
