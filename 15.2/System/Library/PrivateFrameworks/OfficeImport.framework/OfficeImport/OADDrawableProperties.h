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

- (id)initWithDefaults;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)orientedBounds;
- (void)setClickHyperlink:(id)a0;
- (void)setHoverHyperlink:(id)a0;
- (void)setAltTitle:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (id)clickHyperlink;
- (id)hoverHyperlink;
- (void)removeUnnecessaryOverrides;
- (BOOL)hasOrientedBounds;
- (void)setOrientedBounds:(id)a0;
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
