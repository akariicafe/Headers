@class NSString, _SFRSAKeySpecifier;
@protocol SFDigestOperation;

@interface SFRSASigningOperation : NSObject <SFSigningOperation> {
    id _rsaSigningOperationInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _SFRSAKeySpecifier *signingKeySpecifier;
@property (copy, nonatomic) id<SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verify:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeySpecifier:(id)a0 digestOperation:(id)a1;
- (id)initWithKeySpecifier:(id)a0;
- (id)sign:(id)a0 withKey:(id)a1 error:(id *)a2;

@end
