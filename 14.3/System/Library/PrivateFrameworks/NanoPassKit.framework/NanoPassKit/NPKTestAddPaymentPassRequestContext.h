@class NSString;

@interface NPKTestAddPaymentPassRequestContext : NSObject

@property (retain, nonatomic) NSString *cardPNO;
@property (retain, nonatomic) NSString *cardFlow;
@property (retain, nonatomic) NSString *cardID;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *cardIssuer;
@property (retain, nonatomic) NSString *cardProduct;
@property (retain, nonatomic) NSString *cardEncryptionScheme;

- (void).cxx_destruct;

@end
