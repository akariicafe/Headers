@class NSArray, NSString;

@interface NWMTemperatureColor : NSObject <NWMColorPalette>

@property (class, readonly, nonatomic) NSArray *colorSpectrum;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorForTemperature:(id)a0;
+ (void)colorSpectrumBetweenLow:(id)a0 high:(id)a1 handler:(id /* block */)a2;


@end
