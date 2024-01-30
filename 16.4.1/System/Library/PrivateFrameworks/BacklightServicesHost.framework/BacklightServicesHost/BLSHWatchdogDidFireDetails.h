@class NSString, NSDate;

@interface BLSHWatchdogDidFireDetails : NSObject

@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *device;
@property (copy, nonatomic) NSString *explanation;
@property (copy, nonatomic) NSString *abortReasonString;
@property (nonatomic) BOOL debugLogsEnabled;

- (void).cxx_destruct;
- (id)initWithWatchdogDidFireDictionary:(id)a0;

@end
