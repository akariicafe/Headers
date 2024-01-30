@class NSString, PKPaymentSetupProduct;

@interface PKPickerItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) id /* block */ selectionHandler;

+ (id)itemWithTitle:(id)a0 selectionHandler:(id /* block */)a1;
+ (id)itemWithProduct:(id)a0 selectionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)handleSelectionWithCompletionHandler:(id /* block */)a0;

@end
