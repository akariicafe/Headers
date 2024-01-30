@class NSArray;

@interface GEOStorefrontImagery : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) unsigned short bucketId;
@property (readonly, nonatomic) unsigned int buildId;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) double groundAltitude;
@property (readonly, nonatomic) struct GEOOrientedPosition { struct { double x; double y; double z; } position; float yaw; float pitch; float roll; } position;
@property (readonly, nonatomic) NSArray *cameras;
@property (readonly, nonatomic) unsigned int dataFormatVersion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoPosition:(id)a0;

@end
