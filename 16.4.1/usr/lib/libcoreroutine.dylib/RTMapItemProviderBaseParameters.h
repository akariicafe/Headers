@interface RTMapItemProviderBaseParameters : NSObject

@property (readonly, nonatomic) double locationUncertaintyMax;
@property (readonly, nonatomic) double locationUncertaintyMin;
@property (readonly, nonatomic) double mapItemUncertaintyMax;
@property (readonly, nonatomic) double mapItemUncertaintyMin;

- (id)initWithDefaultsManager:(id)a0;
- (id)init;
- (id)initWithLocationUncertaintyMax:(double)a0 locationUncertaintyMin:(double)a1 mapItemUncertaintyMax:(double)a2 mapItemUncertaintyMin:(double)a3;

@end
