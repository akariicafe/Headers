@class NSString, NSArray;

@interface NPKPaymentProvisioningFlowPickerItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *products;
@property (readonly, nonatomic) NSString *identifier;

+ (id)itemWithIdentifier:(id)a0 title:(id)a1 products:(id)a2;
+ (id)itemWithIdentifier:(id)a0 products:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
