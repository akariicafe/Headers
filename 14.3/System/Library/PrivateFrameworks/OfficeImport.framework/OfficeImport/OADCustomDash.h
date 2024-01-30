@class NSArray;

@interface OADCustomDash : OADDash {
    NSArray *mStops;
}

+ (id)defaultProperties;

- (void)setStops:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stops;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)areStopsOverridden;

@end
