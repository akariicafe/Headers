@class NSString;

@interface SXMapItem : SXJSONObject

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) long long type;

@end
