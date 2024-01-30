@class GEOFeatureStyleAttributes;
@protocol VKCustomFeatureDataSource;

@interface VKCustomFeature : NSObject <NSSecureCoding> {
    struct shared_ptr<md::LabelExternalFeature> { struct LabelExternalFeature *__ptr_; struct __shared_weak_count *__cntrl_; } _feature;
    id<VKCustomFeatureDataSource> _dataSource;
    BOOL _isGlobalFeature;
    struct _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; GEOFeatureStyleAttributes *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _featureStyleAttributesPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)featureID;
- (void)setVenueComponentID:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)styleAttributes;
- (void)setPlaceholderIconWithSize:(struct CGSize { double x0; double x1; })a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1 isRound:(BOOL)a2;
- (id).cxx_construct;
- (void)setMinZoom:(float)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)clientFeatureID;
- (void)setText:(id)a0 locale:(id)a1;
- (unsigned long long)venueID;
- (BOOL)isInjectedFeature;
- (void)setTextDisplayMode:(unsigned char)a0;
- (id)dataSource;
- (void)setVenueLevelID:(unsigned long long)a0;
- (BOOL)isPointFeature;
- (void)setClientFeatureID:(unsigned long long)a0;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (id)_initInternalFeatureWithCoordinate:(struct { double x0; double x1; double x2; })a0;
- (void)setVenueFloorOrdinal:(short)a0;
- (BOOL)isLineFeature;
- (unsigned long long)venueBuildingID;
- (unsigned long long)venueComponentID;
- (unsigned long long)venueLevelID;
- (void)setSortKey:(int)a0;
- (void)setDataSource:(id)a0;
- (void)setStyleAttributes:(id)a0;
- (void)setVenueID:(unsigned long long)a0;
- (id)_initWithCoordinate:(struct { double x0; double x1; double x2; })a0 isInjected:(BOOL)a1;
- (void *)lineFeature;
- (short)venueFloorOrdinal;
- (id)initLineWithCoordinates:(const struct { double x0; double x1; double x2; } *)a0 count:(unsigned long long)a1;
- (id)init;
- (unsigned long long)businessID;
- (void)setFeatureID:(unsigned long long)a0;
- (void)setBuildingFaceAzimuth:(float)a0;
- (BOOL)isGlobalFeature;
- (void)setMaxZoom:(float)a0;
- (void)setElevationOffset:(double)a0;
- (void)setAnnotationText:(id)a0 locale:(id)a1;
- (void *)feature;
- (void)setBusinessID:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setVenueBuildingID:(unsigned long long)a0;
- (void)setBuildingHeight:(float)a0;
- (void *)pointFeature;
- (id)initWithCoordinate3D:(struct { double x0; double x1; double x2; })a0;

@end
