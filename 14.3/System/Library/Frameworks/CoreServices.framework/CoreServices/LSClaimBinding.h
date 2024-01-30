@class LSBundleRecord, LSClaimRecord, UTTypeRecord;

@interface LSClaimBinding : NSObject <NSSecureCoding, NSCopying, LSDetachable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) LSClaimRecord *claimRecord;
@property (readonly) UTTypeRecord *typeRecord;
@property (readonly) LSBundleRecord *bundleRecord;

+ (id)_claimBindingsForBindingEvaluator:(const struct BindingEvaluator { id x0; id x1; id x2; id x3; id x4; id x5; struct LSVersionNumber { unsigned char x0[32]; } x6; id x7; BOOL x8; unsigned long long x9; unsigned int x10; unsigned int x11; struct vector<LSBundleClass, std::__1::allocator<LSBundleClass> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<LSBundleClass *, std::__1::allocator<LSBundleClass> > { unsigned int *x0; } x2; } x12; id /* block */ x13; id x14; id /* block */ x15; id x16; } *)a0 error:(id *)a1;
+ (id)claimBindingsWithTypeIdentifier:(id)a0 error:(id *)a1;
+ (id)claimBindingsWithConfiguration:(id)a0 error:(id *)a1;
+ (id)claimBindingsWithURL:(id)a0 error:(id *)a1;
+ (id)new;

- (void)detach;
- (id)_initWithBindingEvaluator:(const struct BindingEvaluator { id x0; id x1; id x2; id x3; id x4; id x5; struct LSVersionNumber { unsigned char x0[32]; } x6; id x7; BOOL x8; unsigned long long x9; unsigned int x10; unsigned int x11; struct vector<LSBundleClass, std::__1::allocator<LSBundleClass> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<LSBundleClass *, std::__1::allocator<LSBundleClass> > { unsigned int *x0; } x2; } x12; id /* block */ x13; id x14; id /* block */ x15; id x16; } *)a0 error:(id *)a1;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 binding:(const struct LSBinding { unsigned int x0; struct LSBundleData *x1; unsigned int x2; struct *x3; id x4; id x5; } *)a1 coreTypesBundleRecord:(id *)a2 typeRecord:(id)a3 error:(id *)a4;
- (id)_initWithClaimRecord:(id)a0 typeRecord:(id)a1 bundleRecord:(id)a2;
- (id)initWithTypeIdentifier:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
