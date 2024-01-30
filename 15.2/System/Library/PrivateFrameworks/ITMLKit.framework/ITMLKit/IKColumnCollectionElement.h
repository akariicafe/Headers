@class NSArray;

@interface IKColumnCollectionElement : IKViewElement {
    NSArray *_columns;
}

@property (readonly, retain, nonatomic) NSArray *columns;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;

@end
