@interface WFObjectBasedTableSection : WFTableSection

@property (readonly, nonatomic) long long cellStyle;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) id /* block */ configurationBlock;

- (void).cxx_destruct;
- (void)addRepresentedObject:(id)a0;
- (void)setRepresentedObjects:(id)a0;
- (id)initWithCellClass:(Class)a0 cellStyle:(long long)a1 representedObjects:(id)a2 configurationBlock:(id /* block */)a3;

@end
