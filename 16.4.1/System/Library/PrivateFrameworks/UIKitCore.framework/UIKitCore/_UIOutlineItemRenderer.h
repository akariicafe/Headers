@interface _UIOutlineItemRenderer : _UIDiffableDataSourceItemRenderer

@property (copy, nonatomic) id /* block */ willUpdateCellHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 cellClass:(Class)a1 handler:(id /* block */)a2;

@end
