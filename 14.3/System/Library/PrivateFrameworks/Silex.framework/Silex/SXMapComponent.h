@class NSString, SXJSONArray;

@interface SXMapComponent : SXComponent

@property (readonly, nonatomic) struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; } region;
@property (readonly, nonatomic) unsigned long long defaultMapType;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) SXJSONArray *items;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;
+ (id)typeString;

- (unsigned long long)defaultMapTypeWithValue:(id)a0 withType:(int)a1;

@end
