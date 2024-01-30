@class NSString, NSArray, NSData;

@interface SEEndPointCA : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *subjectIdentifier;
@property (retain) NSArray *certificates;
@property (readonly) NSData *secureElementAttestation;
@property (readonly) NSString *identifier;
@property (readonly) NSData *instanceAID;

+ (id)endPointCAWithIdentifier:(id)a0 subjectIdentifer:(id)a1 instanceAID:(id)a2 secureElementAttestation:(id)a3 error:(id *)a4;
+ (id)decodeWithData:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)description;
- (void).cxx_destruct;
- (id)encodeWithError:(id *)a0;

@end
