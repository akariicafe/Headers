@class NSString;
@protocol SXAutoPlacementLayout;

@interface SXDebugAdvertisementSettings : NSObject <SXAdvertisingSettings>

@property (readonly, nonatomic) unsigned long long frequency;
@property (readonly, nonatomic) unsigned long long bannerType;
@property (readonly, nonatomic) id<SXAutoPlacementLayout> layout;
@property (readonly, nonatomic) struct _SXConvertibleValue { double value; unsigned long long unit; } distanceFromMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrequency:(unsigned long long)a0 bannerType:(id)a1 layout:(id)a2 distanceFromMedia:(struct _SXConvertibleValue { double x0; unsigned long long x1; })a3;

@end
