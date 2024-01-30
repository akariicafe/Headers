@class NSDictionary, NSString, NSData;

@interface PKSharingCarKeyMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSDictionary *carKeySharingDict;
@property (readonly, nonatomic) NSString *shareIdentifier;
@property (readonly, nonatomic) NSString *shareSessionIdentifier;
@property (readonly, nonatomic) NSString *friendKeyIdentifier;
@property (readonly, nonatomic) NSData *underlyingPayload;

+ (BOOL)supportsSecureCoding;

- (BOOL)configureWithContent:(id)a0;
- (id)initWithRawMessage:(id)a0 type:(unsigned long long)a1 shareIdentifier:(id)a2 friendKeyIdentifier:(id)a3 carKeySharingDict:(id)a4;
- (id)messageWithBindingAttestation:(id)a0;

@end
