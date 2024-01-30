@class NSDateComponents, PKAccount, PKPaymentTransaction;

@interface PKAccountViewInterfaceConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) PKAccount *account;
@property (nonatomic) BOOL isNewAccount;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) unsigned long long destination;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) NSDateComponents *rewardsDateComponents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
