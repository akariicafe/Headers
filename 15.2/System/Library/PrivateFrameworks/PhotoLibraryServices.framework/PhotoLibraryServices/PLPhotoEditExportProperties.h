@interface PLPhotoEditExportProperties : NSObject

@property (readonly, nonatomic) long long baseEXIFOrientation;
@property (readonly, nonatomic) double baseDuration;
@property (readonly, nonatomic) unsigned long long imageWidth;
@property (readonly, nonatomic) unsigned long long imageHeight;

+ (id)exportPropertiesWithImageWidth:(unsigned long long)a0 imageHeight:(unsigned long long)a1 exifOrientation:(long long)a2;
+ (id)exportPropertiesWithImageWidth:(unsigned long long)a0 imageHeight:(unsigned long long)a1 exifOrientation:(long long)a2 duration:(double)a3;

@end
