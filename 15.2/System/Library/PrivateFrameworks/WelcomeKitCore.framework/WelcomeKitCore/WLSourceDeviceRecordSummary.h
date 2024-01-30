@class NSString, NSDictionary, NSDate, WLSourceDeviceAccount;

@interface WLSourceDeviceRecordSummary : NSObject

@property (retain, nonatomic) WLSourceDeviceAccount *account;
@property (nonatomic) unsigned long long sqlID;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long itemSize;
@property (copy, nonatomic) NSString *relativePath;
@property (copy, nonatomic) NSDate *modifiedDate;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL storeDataAsFile;
@property (copy, nonatomic) NSString *dataFilePath;
@property (nonatomic) unsigned long long downloadSegmentCount;
@property (nonatomic) BOOL didDownload;
@property (copy, nonatomic) NSString *bucket;

+ (id)_numberFormatter;
+ (id)summaryWithInfo:(id)a0 account:(id)a1;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0 account:(id)a1;

@end
