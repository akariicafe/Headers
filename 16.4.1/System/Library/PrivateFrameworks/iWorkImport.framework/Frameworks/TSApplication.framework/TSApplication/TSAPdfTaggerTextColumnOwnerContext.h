@class NSArray, TSWPStorage, TSWPSelection;

@interface TSAPdfTaggerTextColumnOwnerContext : TSAPdfTaggerContext

@property (readonly, copy, nonatomic) NSArray *columns;
@property (readonly, weak, nonatomic) TSWPStorage *storage;
@property (readonly, weak, nonatomic) TSWPSelection *limitSelection;

- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)a0 columns:(id)a1 storage:(id)a2 limitSelection:(id)a3;

@end
