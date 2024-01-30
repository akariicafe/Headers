@class NSString;
@protocol SFDigestOperation, SFKeyDerivingOperation;

@interface SFX963KeyDerivationOperation : NSObject <SFKeyDerivingOperation> {
    id _x963KeyDerivationOperationInternal;
}

@property (class, readonly) long long keySource;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id<SFKeyDerivingOperation> sharedSecretOperation;
@property (copy, nonatomic) id<SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)deriveKeyWithSpecifier:(id)a0 fromKeySource:(id)a1 error:(id *)a2;
- (id)initWithSharedSecretOperation:(id)a0;
- (id)initWithSharedSecretOperation:(id)a0 digestOperation:(id)a1;

@end
