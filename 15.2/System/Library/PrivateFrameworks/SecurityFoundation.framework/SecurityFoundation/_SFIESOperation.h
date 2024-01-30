@class _SFKeySpecifier, NSString, _SFAuthenticatedEncryptionOperation, _SFECDHOperation;
@protocol SFDigestOperation;

@interface _SFIESOperation : NSObject <_SFEncryptionOperation> {
    id _iesOperationInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _SFECDHOperation *diffieHellmanOperation;
@property (copy, nonatomic) _SFAuthenticatedEncryptionOperation *encryptionOperation;
@property long long curve;
@property (copy, nonatomic) id<SFDigestOperation> digestOperation;
@property (readonly, copy, nonatomic) _SFKeySpecifier *encryptionKeySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)encrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)decrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCurve:(long long)a0;
- (id)initWithCurve:(long long)a0 diffieHellmanOperation:(id)a1 encryptionOperation:(id)a2 digestOperation:(id)a3;
- (const struct ccdigest_info { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; void *x5; void /* function */ *x6; void /* function */ *x7; } *)_ccDigestInfoWithError:(id *)a0;

@end
