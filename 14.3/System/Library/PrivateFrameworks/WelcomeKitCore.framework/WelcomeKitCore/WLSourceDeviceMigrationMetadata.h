@class NSString, NSDate;

@interface WLSourceDeviceMigrationMetadata : NSObject

@property (nonatomic) unsigned long long estimatedTotalDataSizeInMegabytes;
@property (nonatomic) unsigned long long elapsedTimeInSeconds;
@property (retain, nonatomic) NSDate *communicationDate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic) unsigned long long crashCount;
@property (retain, nonatomic) NSString *deviceOSVersion;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *deviceModel;

- (void).cxx_destruct;

@end
