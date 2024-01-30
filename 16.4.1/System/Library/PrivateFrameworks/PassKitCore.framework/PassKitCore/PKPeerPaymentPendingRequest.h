@class NSString, NSArray, NSDate, PKCurrencyAmount;

@interface PKPeerPaymentPendingRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *requestToken;
@property (retain, nonatomic) NSString *requesterAddress;
@property (retain, nonatomic) NSString *requesteeAddress;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSString *memo;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSDate *requestDate;
@property (retain, nonatomic) NSDate *expiryDate;
@property (retain, nonatomic) NSDate *lastDismissedDate;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSString *status;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestToken:(id)a0 requesterAddress:(id)a1 requesteeAddress:(id)a2 currencyAmount:(id)a3 memo:(id)a4 sessionID:(id)a5 requestDate:(id)a6 expiryDate:(id)a7 lastDismissedDate:(id)a8 actions:(id)a9 status:(id)a10;

@end
