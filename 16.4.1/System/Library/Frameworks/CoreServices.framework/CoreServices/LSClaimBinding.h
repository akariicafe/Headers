@class LSBundleRecord, LSClaimRecord, UTTypeRecord;

@interface LSClaimBinding : NSObject <NSSecureCoding, NSCopying, LSDetachable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) LSClaimRecord *claimRecord;
@property (readonly) UTTypeRecord *typeRecord;
@property (readonly) LSBundleRecord *bundleRecord;

+ (id)new;
+ (id)_claimBindingsForBindingEvaluator:(const void *)a0 error:(id *)a1;
+ (id)claimBindingsWithConfiguration:(id)a0 error:(id *)a1;
+ (id)claimBindingsWithTypeIdentifier:(id)a0 error:(id *)a1;
+ (id)claimBindingsWithURL:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (void)detach;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)_initWithBindingEvaluator:(const void *)a0 error:(id *)a1;
- (id)_initWithClaimRecord:(id)a0 typeRecord:(id)a1 bundleRecord:(id)a2;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 binding:(const struct LSBinding { unsigned int x0; struct LSBundleData *x1; unsigned int x2; struct *x3; id x4; id x5; } *)a1 coreTypesBundleRecord:(id *)a2 typeRecord:(id)a3 error:(id *)a4;
- (id)initWithTypeIdentifier:(id)a0 error:(id *)a1;

@end
