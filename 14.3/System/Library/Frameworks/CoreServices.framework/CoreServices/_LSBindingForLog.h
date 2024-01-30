@class _LSDatabase, NSString, reason;

@interface _LSBindingForLog : NSObject {
    _LSDatabase *_db;
    struct LSBinding { unsigned int bundle; struct LSBundleData *bundleData; unsigned int claim; struct *claimData; reason *userInfo; NSString *x0; } _binding;
}

- (id)initWithState:(const struct State { struct LSContext *x0; struct BindingEvaluator { id x0; id x1; id x2; id x3; id x4; id x5; struct LSVersionNumber { unsigned char x0[32]; } x6; id x7; BOOL x8; unsigned long long x9; unsigned int x10; unsigned int x11; struct vector<LSBundleClass, std::__1::allocator<LSBundleClass> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<LSBundleClass *, std::__1::allocator<LSBundleClass> > { unsigned int *x0; } x2; } x12; id /* block */ x13; id x14; id /* block */ x15; id x16; } x1; struct vector<LaunchServices::BindingEvaluation::ExtendedBinding, std::__1::allocator<LaunchServices::BindingEvaluation::ExtendedBinding> > { struct ExtendedBinding *x0; struct ExtendedBinding *x1; struct __compressed_pair<LaunchServices::BindingEvaluation::ExtendedBinding *, std::__1::allocator<LaunchServices::BindingEvaluation::ExtendedBinding> > { struct ExtendedBinding *x0; } x2; } x2; BOOL x3; id x4; unsigned int x5; struct *x6; BOOL x7; id x8; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x9; id x10; } *)a0 binding:(const struct LSBinding { unsigned int x0; struct LSBundleData *x1; unsigned int x2; struct *x3; id x4; id x5; } *)a1;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)description;
- (id).cxx_construct;

@end
