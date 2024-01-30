@class NSString;
@protocol SXAutoPlacementLayout;

@interface SXJSONAdvertisementSettings : SXJSONObject <SXAdvertisingSettings>

@property (readonly, nonatomic) unsigned long long frequency;
@property (readonly, nonatomic) unsigned long long bannerType;
@property (readonly, nonatomic) id<SXAutoPlacementLayout> layout;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } distanceFromMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;

- (unsigned long long)bannerTypeWithValue:(id)a0 withType:(int)a1;

@end
