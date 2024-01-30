@protocol VKCustomFeatureDataSource;

@interface VKCustomFeature : NSObject <NSSecureCoding> {
    struct shared_ptr<md::LabelExternalPointFeature> { struct LabelExternalPointFeature *__ptr_; struct __shared_weak_count *__cntrl_; } _feature;
    id<VKCustomFeatureDataSource> _dataSource;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (struct { double x0; double x1; double x2; })muninFeatureLocationForItemCoordinate:(struct { double x0; double x1; })a0 viewPosition:(struct { double x0; double x1; double x2; })a1 groundAltitude:(double)a2;

- (void)setSortKey:(int)a0;
- (void)setStyleAttributes:(id)a0;
- (id)styleAttributes;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (void)setMinZoom:(float)a0;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (void)setMaxZoom:(float)a0;
- (void)setVenueComponentID:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setVenueLevelID:(unsigned long long)a0;
- (id)_initInternalFeatureWithCoordinate:(struct { double x0; double x1; })a0;
- (void)setPlaceholderIconWithSize:(struct CGSize { double x0; double x1; })a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1 isRound:(BOOL)a2;
- (unsigned long long)featureID;
- (id)_initWithCoordinate:(struct { double x0; double x1; double x2; })a0 isInjected:(BOOL)a1;
- (void)setText:(id)a0 locale:(id)a1;
- (void)setAnnotationText:(id)a0 locale:(id)a1;
- (void)setVenueFloorOrdinal:(short)a0;
- (id)initWithCoder:(id)a0;
- (void)setVenueBuildingID:(unsigned long long)a0;
- (short)venueFloorOrdinal;
- (id).cxx_construct;
- (void)setBusinessID:(unsigned long long)a0;
- (unsigned long long)venueID;
- (struct shared_ptr<md::LabelExternalPointFeature> { struct LabelExternalPointFeature *x0; struct __shared_weak_count *x1; } *)feature;
- (void)setTextDisplayMode:(unsigned char)a0;
- (unsigned long long)venueBuildingID;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0 elevation:(double)a1;
- (unsigned long long)businessID;
- (void)setVenueID:(unsigned long long)a0;
- (unsigned long long)venueComponentID;
- (unsigned long long)venueLevelID;
- (void)setFeatureID:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isInjectedFeature;

@end
