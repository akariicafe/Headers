@class NSString, NSArray, NSData;

@interface SEEndPointCA : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *subjectIdentifier;
@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *secureElementAttestation;
@property (readonly, nonatomic) struct __SecCertificate { } *certificate;

+ (id)decodeWithData:(id)a0 error:(id *)a1;
+ (id)endPointCAWithIdentifier:(id)a0 subjectIdentifer:(id)a1 secureElementAttestation:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)description;
- (id)encodeWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;

@end
