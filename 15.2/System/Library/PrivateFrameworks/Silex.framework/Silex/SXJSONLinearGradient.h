@class SXJSONArray;

@interface SXJSONLinearGradient : SXJSONObject

@property (readonly, nonatomic) SXJSONArray *colorStops;
@property (readonly, nonatomic) double angle;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;

@end
