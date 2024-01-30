@class NSData, NSString;

@interface _SFSHA256DigestOperation : NSObject <SFDigestOperationInternal, SFDigestOperation> {
    id _sha256DigestOperationInternal;
}

@property (class, readonly) long long outputSize;
@property (class, readonly) long long blockSize;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_secKeyECDSAAlgorithm) const struct __CFString { } *secKeyECDSAAlgorithm;
@property (readonly, nonatomic, getter=_ccDigestInfo) const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; } *ccDigestInfo;
@property (readonly, copy) NSData *hashValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)digest:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)addData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
