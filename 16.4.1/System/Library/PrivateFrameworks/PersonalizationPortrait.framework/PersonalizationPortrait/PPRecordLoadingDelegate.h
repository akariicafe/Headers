@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *loadRecordsDetectedSince;

- (unsigned char)recordLoadingSetup;
- (id)initWithName:(id)a0;
- (unsigned char)recentRecordLoadingSetup;
- (void)recentRecordLoadingCompletion;
- (void)resetRecordData;
- (id)description;
- (void)recordLoadingCompletion;
- (void).cxx_destruct;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (unsigned char)recordLoadingHandler:(id)a0;

@end
