@class VKRouteEtaDescription;

@interface VKRouteRangeAnnotationInfo : NSObject

@property (readonly, nonatomic) VKRouteEtaDescription *etaDescription;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } start;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } end;

- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithEtaDescription:(id)a0 start:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 end:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;

@end
