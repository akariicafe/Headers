@class PKPaymentPass, NSArray, NSString, PKPassView, PKTransitBalanceModel;

@interface PKDashboardTransitItem : NSObject <PKDashboardItem> {
    PKPassView *_passView;
}

@property (nonatomic) unsigned long long transitItemType;
@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel;
@property (copy, nonatomic) NSArray *transitCommutePlans;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithPassView:(id)a0;

@end
