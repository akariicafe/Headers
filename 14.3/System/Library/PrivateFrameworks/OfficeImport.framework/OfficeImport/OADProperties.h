@interface OADProperties : NSObject {
    OADProperties *mParent;
    unsigned char mIsMerged : 1;
    unsigned char mIsMergedWithParent : 1;
}

+ (id)defaultProperties;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)parent;
- (void)flatten;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (void)setParent:(id)a0;
- (BOOL)isMergedPropertyForSelector:(SEL)a0;
- (id)overrideForSelector:(SEL)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (id)possiblyInexistentOverrideForSelector:(SEL)a0;
- (void)changeParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isMerged;
- (BOOL)isMergedWithParent;
- (void)setMerged:(BOOL)a0;
- (void)setMergedWithParent:(BOOL)a0;
- (void)removeUnnecessaryOverrides;
- (id)overrideForSelector:(SEL)a0 mustExist:(BOOL)a1;
- (void)p_setParent:(id)a0;

@end
