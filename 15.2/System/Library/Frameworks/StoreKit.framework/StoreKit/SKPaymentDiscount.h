@class NSString, NSUUID, NSNumber;

@interface SKPaymentDiscount : NSObject {
    id _internal;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *keyIdentifier;
@property (readonly, copy, nonatomic) NSUUID *nonce;
@property (readonly, copy, nonatomic) NSString *signature;
@property (readonly, copy, nonatomic) NSNumber *timestamp;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 keyIdentifier:(id)a1 nonce:(id)a2 signature:(id)a3 timestamp:(id)a4;

@end
