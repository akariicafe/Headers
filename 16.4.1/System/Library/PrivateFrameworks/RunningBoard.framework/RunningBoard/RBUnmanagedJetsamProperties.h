@interface RBUnmanagedJetsamProperties : RBJetsamProperties

+ (id)new;

- (BOOL)isValid;
- (int)memoryLimitForCategory:(id)a0 strength:(unsigned char *)a1;
- (id)init;

@end
