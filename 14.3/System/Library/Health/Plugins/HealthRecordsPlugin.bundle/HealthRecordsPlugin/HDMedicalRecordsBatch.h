@class NSArray, HDCodableObjectCollection;

@interface HDMedicalRecordsBatch : NSObject

@property (readonly, copy, nonatomic) NSArray *medicalRecords;
@property (readonly, copy, nonatomic) HDCodableObjectCollection *objectCollection;

+ (id)medicalRecordsBatchFromObjectCollection:(id)a0;

- (void).cxx_destruct;
- (id)initWithMedicalRecords:(id)a0;

@end
