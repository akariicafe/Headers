@interface OADProperties : NSObject {
    OADProperties *mParent;
    unsigned char mIsMerged : 1;
    unsigned char mIsMergedWithParent : 1;
}

+ (id)defaultProperties;

- (id)parent;
- (void)setMerged:(BOOL)a0;
- (void)setParent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isMerged;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (void)flatten;
- (void)changeParentPreservingEffectiveValues:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isMergedPropertyForSelector:(SEL)a0;
- (BOOL)isMergedWithParent;
- (id)overrideForSelector:(SEL)a0;
- (id)overrideForSelector:(SEL)a0 mustExist:(BOOL)a1;
- (void)p_setParent:(id)a0;
- (id)possiblyInexistentOverrideForSelector:(SEL)a0;
- (void)removeUnnecessaryOverrides;
- (void)setMergedWithParent:(BOOL)a0;

@end
