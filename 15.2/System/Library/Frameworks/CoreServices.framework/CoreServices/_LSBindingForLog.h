@class _LSDatabase, NSString, reason;

@interface _LSBindingForLog : NSObject {
    _LSDatabase *_db;
    struct LSBinding { unsigned int bundle; struct LSBundleData *bundleData; unsigned int claim; struct *claimData; reason *userInfo; NSString *x0; } _binding;
}

- (id)initWithState:(const void *)a0 binding:(const struct LSBinding { unsigned int x0; struct LSBundleData *x1; unsigned int x2; struct *x3; id x4; id x5; } *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id).cxx_construct;

@end
