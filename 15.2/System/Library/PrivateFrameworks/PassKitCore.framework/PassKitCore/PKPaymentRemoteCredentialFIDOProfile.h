@class NSString, NSData;

@interface PKPaymentRemoteCredentialFIDOProfile : NSObject

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSString *accountHash;
@property (readonly, copy, nonatomic) NSData *keyHash;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;

@end
