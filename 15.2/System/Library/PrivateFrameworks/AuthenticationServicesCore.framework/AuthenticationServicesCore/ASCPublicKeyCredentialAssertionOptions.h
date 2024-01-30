@class NSString, NSData, NSArray;

@interface ASCPublicKeyCredentialAssertionOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long credentialKind;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSData *challenge;
@property (retain, nonatomic) NSArray *allowedCredentials;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKind:(unsigned long long)a0 relyingParyIdentifier:(id)a1 challenge:(id)a2 allowedCredentials:(id)a3;

@end
