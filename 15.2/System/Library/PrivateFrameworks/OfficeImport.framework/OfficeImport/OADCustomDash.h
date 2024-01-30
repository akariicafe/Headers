@class NSArray;

@interface OADCustomDash : OADDash {
    NSArray *mStops;
}

+ (id)defaultProperties;

- (id)stops;
- (id)initWithDefaults;
- (void)setStops:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)areStopsOverridden;

@end
