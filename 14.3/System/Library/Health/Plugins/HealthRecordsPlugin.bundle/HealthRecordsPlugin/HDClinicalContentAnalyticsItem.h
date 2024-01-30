@class NSURL, HKMedicalRecord;

@interface HDClinicalContentAnalyticsItem : NSObject

@property (readonly, copy, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) HKMedicalRecord *medicalRecord;

- (void).cxx_destruct;
- (id)initWithSourceURL:(id)a0 medicalRecord:(id)a1;

@end
