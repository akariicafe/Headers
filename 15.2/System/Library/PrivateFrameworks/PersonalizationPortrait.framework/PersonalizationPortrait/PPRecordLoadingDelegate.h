@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *loadRecordsDetectedSince;

- (unsigned char)recordLoadingSetup;
- (unsigned char)recordLoadingHandler:(id)a0;
- (id)description;
- (unsigned char)recentRecordLoadingSetup;
- (void)resetRecordData;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (void)recentRecordLoadingCompletion;

@end
