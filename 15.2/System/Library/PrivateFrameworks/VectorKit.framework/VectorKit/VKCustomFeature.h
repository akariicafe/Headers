@class GEOFeatureStyleAttributes;
@protocol VKCustomFeatureDataSource;

@interface VKCustomFeature : NSObject <NSSecureCoding> {
    struct shared_ptr<md::LabelExternalFeature> { struct LabelExternalFeature *__ptr_; struct __shared_weak_count *__cntrl_; } _feature;
    id<VKCustomFeatureDataSource> _dataSource;
    BOOL _isGlobalFeature;
    struct _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; GEOFeatureStyleAttributes *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _featureStyleAttributesPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)businessID;
- (id)styleAttributes;
- (void)setStyleAttributes:(id)a0;
- (unsigned long long)featureID;
- (void)setBuildingFaceAzimuth:(float)a0;
- (void)setVenueLevelID:(unsigned long long)a0;
- (void)setVenueComponentID:(unsigned long long)a0;
- (void)setVenueFloorOrdinal:(short)a0;
- (id)initLineWithCoordinates:(const struct { double x0; double x1; double x2; } *)a0 count:(unsigned long long)a1;
- (void)setFeatureID:(unsigned long long)a0;
- (void)setMaxZoom:(float)a0;
- (BOOL)isPointFeature;
- (BOOL)isLineFeature;
- (id)_initInternalFeatureWithCoordinate:(struct { double x0; double x1; double x2; })a0;
- (BOOL)isInjectedFeature;
- (unsigned long long)venueID;
- (void)setVenueBuildingID:(unsigned long long)a0;
- (void)setSortKey:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (short)venueFloorOrdinal;
- (void)setDataSource:(id)a0;
- (BOOL)isGlobalFeature;
- (unsigned long long)venueLevelID;
- (id)dataSource;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)venueBuildingID;
- (id)initWithCoder:(id)a0;
- (void)setBusinessID:(unsigned long long)a0;
- (unsigned long long)venueComponentID;
- (void *)pointFeature;
- (void)setText:(id)a0 locale:(id)a1;
- (void)setAnnotationText:(id)a0 locale:(id)a1;
- (void)setTextDisplayMode:(unsigned char)a0;
- (void)setPlaceholderIconWithSize:(struct CGSize { double x0; double x1; })a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1 isRound:(BOOL)a2;
- (id).cxx_construct;
- (void *)feature;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (void)setMinZoom:(float)a0;
- (id)_initWithCoordinate:(struct { double x0; double x1; double x2; })a0 isInjected:(BOOL)a1;
- (void *)lineFeature;
- (id)initWithCoordinate3D:(struct { double x0; double x1; double x2; })a0;
- (void)setBuildingHeight:(float)a0;
- (void)setVenueID:(unsigned long long)a0;

@end
