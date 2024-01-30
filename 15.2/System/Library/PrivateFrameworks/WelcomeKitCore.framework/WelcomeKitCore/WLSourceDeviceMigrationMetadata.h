@class NSString, NSDate;

@interface WLSourceDeviceMigrationMetadata : NSObject

@property (retain, nonatomic) NSDate *communicationDate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic) unsigned long long crashCount;
@property (retain, nonatomic) NSString *deviceOSVersion;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *clientVersion;

- (void).cxx_destruct;

@end
