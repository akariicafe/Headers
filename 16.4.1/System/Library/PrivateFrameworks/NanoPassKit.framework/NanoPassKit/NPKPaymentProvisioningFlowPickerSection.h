@class NSString, NSMutableArray, NSNumber;

@interface NPKPaymentProvisioningFlowPickerSection : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footer;
@property (readonly, copy, nonatomic) NSMutableArray *items;
@property (readonly, copy, nonatomic) NSNumber *productType;
@property (readonly, nonatomic) BOOL isTransitSection;
@property (readonly, nonatomic) BOOL isPaymentSection;
@property (readonly, nonatomic) BOOL isEMoneySection;
@property (readonly, nonatomic) BOOL isAppleBalanceSection;

+ (id)sectionWithTitle:(id)a0 footer:(id)a1 productType:(id)a2;
+ (id)sectionWithTitle:(id)a0 footer:(id)a1 productType:(id)a2 items:(id)a3;
+ (id)sectionWithTitle:(id)a0 productType:(id)a1;
+ (id)sectionWithTitle:(id)a0 productType:(id)a1 items:(id)a2;

- (id)description;
- (void).cxx_destruct;

@end
