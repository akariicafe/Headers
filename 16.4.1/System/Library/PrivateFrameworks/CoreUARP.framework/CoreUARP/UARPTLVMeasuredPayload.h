@class NSString, NSNumber;

@interface UARPTLVMeasuredPayload : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *payload4cc;
@property (copy) NSString *payloadLongname;
@property long long hashAlgorithm;
@property (retain) NSNumber *effectiveSecurityMode;
@property (retain) NSNumber *effectiveProductionMode;
@property (retain) NSNumber *isTrusted;
@property (retain) NSNumber *digestListSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
