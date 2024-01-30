@class NSError, HDProfile, NSDate;

@interface HDClinicalIngestionNewRecordsCheckOperation : NSOperation

@property (readonly, copy, nonatomic) NSDate *startTime;
@property (readonly, copy, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) BOOL hasNewRecords;
@property (readonly, copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)main;
- (id)initWithProfile:(id)a0 startTime:(id)a1;

@end
