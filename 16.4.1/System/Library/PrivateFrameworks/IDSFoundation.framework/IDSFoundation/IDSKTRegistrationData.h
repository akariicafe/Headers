@class NSData, NSDate;

@interface IDSKTRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *ktDataForRegistration;
@property (retain, nonatomic) NSData *ktPublicAccountKey;
@property (retain, nonatomic) NSData *ktDataSignature;
@property (retain, nonatomic) NSDate *registeredTime;
@property (nonatomic) BOOL uploadedToKVS;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (BOOL)needsKVSUpload;

@end
