@class NSData, NSError;

@interface IDSLocalPairingIdentityDataErrorPair : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *identityData;
@property (retain, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentityData:(id)a0;
- (id)initWithIdentityData:(id)a0 error:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
