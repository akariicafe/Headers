@class NSString, NSNumber;

@interface PHAssetPhotosInfoPanelExtendedProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSString *cameraMake;
@property (readonly, nonatomic) NSString *cameraModel;
@property (readonly, nonatomic) NSString *lensModel;
@property (readonly, nonatomic) NSNumber *flashFired;
@property (readonly, nonatomic) NSNumber *whiteBalance;
@property (readonly, nonatomic) NSNumber *meteringMode;
@property (readonly, nonatomic) NSNumber *iso;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *exposureBias;
@property (readonly, nonatomic) NSNumber *aperture;
@property (readonly, nonatomic) NSNumber *shutterSpeed;
@property (readonly, nonatomic) NSString *codec;
@property (readonly, nonatomic) NSNumber *fps;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *sampleRate;
@property (readonly, nonatomic) NSNumber *bitrate;
@property (readonly, nonatomic) NSNumber *trackFormat;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
