@class NSArray, NSDictionary, WKInterfaceController;

@interface WKSPInterfaceList : WKSPInterfaceObject

@property (copy, nonatomic) NSArray *rowControllers;
@property (copy, nonatomic) NSDictionary *rowDescriptions;
@property (weak, nonatomic) WKInterfaceController *controller;
@property (retain, nonatomic) NSArray *rowControllerProperties;
@property (readonly, nonatomic) long long numberOfRows;

- (void).cxx_destruct;
- (void)_setupWithDescription:(id)a0 forController:(id)a1;
- (id)rowControllerAtIndex:(long long)a0;
- (void)setNumberOfRows:(long long)a0 withRowType:(id)a1;
- (void)setRowTypes:(id)a0;

@end
