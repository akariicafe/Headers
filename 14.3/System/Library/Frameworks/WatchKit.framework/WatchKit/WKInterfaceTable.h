@class NSDictionary, NSMutableArray, WKInterfaceController;

@interface WKInterfaceTable : WKInterfaceObject

@property (copy, nonatomic) NSDictionary *rowDescriptions;
@property (retain, nonatomic) NSMutableArray *rowControllers;
@property (retain, nonatomic) NSMutableArray *rowControllerProperties;
@property (weak, nonatomic) WKInterfaceController *controller;
@property (readonly, nonatomic) long long numberOfRows;

- (void).cxx_destruct;
- (void)_setupWithDescription:(id)a0 forController:(id)a1;
- (id)rowControllerAtIndex:(long long)a0;
- (void)setRowTypes:(id)a0;
- (void)setNumberOfRows:(long long)a0 withRowType:(id)a1;
- (void)_getRowControllers:(id)a0 rowControllerProperties:(id)a1 forRowTypes:(id)a2;
- (void)resequenceRowControllerPropertyIndexes;
- (void)insertRowsAtIndexes:(id)a0 withRowType:(id)a1;
- (void)removeRowsAtIndexes:(id)a0;
- (void)performSegueForRow:(long long)a0;
- (void)scrollToRowAtIndex:(long long)a0;

@end
