@class NSString, NSData;

@interface PKPaymentEligibilityFIDOProfile : NSObject

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSString *accountHash;
@property (readonly, copy, nonatomic) NSData *keyHash;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
