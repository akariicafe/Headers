@interface OADProperties : NSObject {
    OADProperties *mParent;
    unsigned char mIsMerged : 1;
    unsigned char mIsMergedWithParent : 1;
}

+ (id)defaultProperties;

- (id)parent;
- (id)initWithDefaults;
- (void)setParent:(id)a0;
- (void)flatten;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isMerged;
- (void)setMerged:(BOOL)a0;
- (BOOL)isMergedPropertyForSelector:(SEL)a0;
- (id)overrideForSelector:(SEL)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (id)possiblyInexistentOverrideForSelector:(SEL)a0;
- (void)changeParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isMergedWithParent;
- (void)setMergedWithParent:(BOOL)a0;
- (void)removeUnnecessaryOverrides;
- (id)overrideForSelector:(SEL)a0 mustExist:(BOOL)a1;
- (void)p_setParent:(id)a0;

@end
