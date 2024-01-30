@interface DCIMLocationUtilities : NSObject

+ (id)locationFromImageProperties:(id)a0;
+ (id)_sharedGPSDateAndTimestampFormatter;
+ (id)locationFromImageProperties:(id)a0 timestampIfMissing:(id)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })locationCoordinate2DFromAVAsset:(id)a0;
+ (id)locationFromAVAsset:(id)a0 timestampIfMissing:(id)a1;

@end
