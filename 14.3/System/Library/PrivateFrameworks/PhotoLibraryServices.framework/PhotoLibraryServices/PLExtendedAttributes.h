@class NSNumber, NSString, PLManagedAsset;

@interface PLExtendedAttributes : PLManagedObject

@property (retain, nonatomic) NSNumber *aperture;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSString *cameraModel;
@property (retain, nonatomic) NSString *cameraMake;
@property (retain, nonatomic) NSString *codec;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *exposureBias;
@property (retain, nonatomic) NSNumber *flashFired;
@property (retain, nonatomic) NSNumber *focalLength;
@property (retain, nonatomic) NSNumber *fps;
@property (retain, nonatomic) NSNumber *iso;
@property (retain, nonatomic) NSString *lensModel;
@property (retain, nonatomic) NSNumber *meteringMode;
@property (retain, nonatomic) NSNumber *sampleRate;
@property (retain, nonatomic) NSNumber *shutterSpeed;
@property (retain, nonatomic) NSNumber *trackFormat;
@property (retain, nonatomic) NSNumber *whiteBalance;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) PLManagedAsset *asset;

+ (id)entityName;
+ (id)distinctValuesForKeyPath:(id)a0 inManagedObjectContext:(id)a1;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;

@end
