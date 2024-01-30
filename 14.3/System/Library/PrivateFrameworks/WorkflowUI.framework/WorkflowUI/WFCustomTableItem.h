@class NSMapTable;

@interface WFCustomTableItem : WFTableItem

@property (readonly, nonatomic) NSMapTable *representedObjectChangeTargetSelectorTable;
@property (retain, nonatomic) id representedObject;
@property (readonly, copy, nonatomic) id /* block */ configurationBlock;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addRepresentedObjectChangeObserver:(id)a0 action:(SEL)a1;
- (void)configureCell:(id)a0;
- (id)initWithCellClass:(Class)a0 style:(long long)a1 representedObject:(id)a2 configurationBlock:(id /* block */)a3;
- (void)setRepresentedObject:(id)a0 updatingCell:(BOOL)a1;

@end
