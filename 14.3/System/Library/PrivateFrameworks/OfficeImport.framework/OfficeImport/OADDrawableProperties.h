@class OADHyperlink, NSString, OADOrientedBounds;

@interface OADDrawableProperties : OADProperties {
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    NSString *mTitle;
    NSString *mDescription;
    unsigned char mHasAspectRatioLocked : 1;
    unsigned char mAspectRatioLocked : 1;
    unsigned char mHasWrdInline : 1;
    unsigned char mWrdInline : 1;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)orientedBounds;
- (id)clickHyperlink;
- (void)setOrientedBounds:(id)a0;
- (void)setClickHyperlink:(id)a0;
- (void)setHoverHyperlink:(id)a0;
- (void)setAltTitle:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (id)hoverHyperlink;
- (void)removeUnnecessaryOverrides;
- (BOOL)hasOrientedBounds;
- (void)setAspectRatioLocked:(BOOL)a0;
- (void)setWrdInline:(BOOL)a0;
- (BOOL)hasClickHyperlink;
- (BOOL)hasHoverHyperlink;
- (BOOL)hasAltTitle;
- (id)altTitle;
- (BOOL)isAspectRatioLocked;
- (BOOL)isWrdInline;
- (BOOL)hasAspectRatioLocked;
- (BOOL)hasWrdInline;
- (id)orientedBoundsForCharts;
- (id)altDescription;
- (void)setAltDescription:(id)a0;
- (BOOL)hasAltDescription;

@end
