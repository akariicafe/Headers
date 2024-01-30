@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *loadRecordsDetectedSince;

- (void).cxx_destruct;
- (unsigned char)recordLoadingSetup;
- (id)description;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingSetup;
- (unsigned char)recordLoadingHandler:(id)a0;
- (void)resetRecordData;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (id)initWithName:(id)a0;
- (void)recentRecordLoadingCompletion;

@end
