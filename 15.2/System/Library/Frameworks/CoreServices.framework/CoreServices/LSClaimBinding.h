@class LSBundleRecord, LSClaimRecord, UTTypeRecord;

@interface LSClaimBinding : NSObject <NSSecureCoding, NSCopying, LSDetachable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) LSClaimRecord *claimRecord;
@property (readonly) UTTypeRecord *typeRecord;
@property (readonly) LSBundleRecord *bundleRecord;

+ (id)_claimBindingsForBindingEvaluator:(const void *)a0 error:(id *)a1;
+ (id)claimBindingsWithTypeIdentifier:(id)a0 error:(id *)a1;
+ (id)claimBindingsWithConfiguration:(id)a0 error:(id *)a1;
+ (id)claimBindingsWithURL:(id)a0 error:(id *)a1;
+ (id)new;

- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)detach;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithBindingEvaluator:(const void *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_initWithClaimRecord:(id)a0 typeRecord:(id)a1 bundleRecord:(id)a2;
- (id)init;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 binding:(const struct LSBinding { unsigned int x0; struct LSBundleData *x1; unsigned int x2; struct *x3; id x4; id x5; } *)a1 coreTypesBundleRecord:(id *)a2 typeRecord:(id)a3 error:(id *)a4;
- (id)initWithTypeIdentifier:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
