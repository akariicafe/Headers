@class NSString, NSDate;

@interface PLDuetActivitySchedulerUsageSnapshot : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *stopDate;
@property double numberOfBytesUploadedWiFi;
@property double numberOfBytesDownloadedWiFi;
@property double numberOfBytesUploadedCell;
@property double numberOfBytesDownloadedCell;
@property (retain) NSString *bundleID;

- (id)description;
- (void).cxx_destruct;

@end
