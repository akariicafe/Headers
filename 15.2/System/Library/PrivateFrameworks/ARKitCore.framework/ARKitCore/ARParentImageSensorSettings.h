@class NSArray;

@interface ARParentImageSensorSettings : NSObject <NSCopying>

@property (nonatomic) BOOL audioCaptureEnabled;
@property (nonatomic) BOOL allowCameraInMultipleForegroundAppLayout;
@property (copy, nonatomic) NSArray *settings;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
