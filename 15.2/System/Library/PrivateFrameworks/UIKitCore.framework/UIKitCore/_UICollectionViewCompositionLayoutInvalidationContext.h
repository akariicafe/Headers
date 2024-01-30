@class NSMapTable;

@interface _UICollectionViewCompositionLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    NSMapTable *_invalidationContextTable;
}

@property (retain, nonatomic, getter=_invalidationContextTable, setter=_setInvalidationContextTable:) NSMapTable *invalidationContextTable;

- (void).cxx_destruct;

@end
