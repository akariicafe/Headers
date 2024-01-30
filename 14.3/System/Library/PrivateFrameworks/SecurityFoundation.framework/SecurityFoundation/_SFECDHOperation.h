@class NSString;

@interface _SFECDHOperation : NSObject <SFKeyDerivingOperation> {
    id _ecdhOperationInternal;
}

@property (class, readonly) long long keySource;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_defaultMode;
+ (id)_defaultOperation;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)deriveKeyWithSpecifier:(id)a0 fromKeySource:(id)a1 error:(id *)a2;

@end
