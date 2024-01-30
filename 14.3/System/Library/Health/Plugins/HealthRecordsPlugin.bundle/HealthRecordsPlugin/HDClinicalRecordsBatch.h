@class NSArray, HDCodableObjectCollection;

@interface HDClinicalRecordsBatch : NSObject

@property (readonly, copy, nonatomic) NSArray *clinicalRecords;
@property (readonly, copy, nonatomic) NSArray *obsoleteResourceIdentifiers;
@property (readonly, copy, nonatomic) HDCodableObjectCollection *objectCollectionContainingClinicalRecords;

+ (id)clinicalRecordsBatchFromObjectCollection:(id)a0 obsoleteResourceIdentifiers:(id)a1;

- (void).cxx_destruct;
- (id)initWithClinicalRecords:(id)a0 obsoleteResourceIdentifiers:(id)a1;

@end
