@class NSString, NSData;

@interface PKPaymentEligibilityFIDOProfile : NSObject

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSString *accountHash;
@property (readonly, copy, nonatomic) NSData *keyHash;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
