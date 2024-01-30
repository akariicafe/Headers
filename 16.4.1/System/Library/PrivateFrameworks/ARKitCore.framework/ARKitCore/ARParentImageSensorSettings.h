@class NSArray;

@interface ARParentImageSensorSettings : NSObject <NSCopying>

@property (nonatomic) BOOL audioCaptureEnabled;
@property (nonatomic) BOOL allowCameraInMultipleForegroundAppLayout;
@property (copy, nonatomic) NSArray *settings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
