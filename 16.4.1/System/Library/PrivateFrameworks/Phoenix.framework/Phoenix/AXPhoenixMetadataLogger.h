@class NSString, NSDateFormatter, NSDate;

@interface AXPhoenixMetadataLogger : NSObject

@property (retain, nonatomic) NSDate *startTimestamp;
@property (retain, nonatomic) NSString *metadataFilePath;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (id)_deviceModelName;
- (id)_fullHardwareConfigurationString;
- (id)_orientationString;
- (void)setMetadataFilePathUnderDirectory:(id)a0;
- (void)writeMetadataToFileWithSensors:(id)a0 withAnnotations:(id)a1 withFalsePositivesMetadata:(id)a2;

@end
