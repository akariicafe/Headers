@class VKRouteEtaDescription;

@interface VKRouteRangeAnnotationInfo : NSObject

@property (readonly, nonatomic) VKRouteEtaDescription *etaDescription;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } start;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } end;

- (id)initWithEtaDescription:(id)a0 start:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 end:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (void)dealloc;
- (id).cxx_construct;

@end
