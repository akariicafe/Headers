@class NSSet, _CDCloudFamilyDataCollectionTask;

@interface _PSFamilyFeatureExtractor : NSObject

@property (retain, nonatomic) _CDCloudFamilyDataCollectionTask *task;
@property (readonly, nonatomic) NSSet *featureSet;

- (void).cxx_destruct;
- (id)init;
- (id)initWith:(id)a0 featureSet:(id)a1;
- (id)featureInputForContact:(id)a0;
- (id)featureInputsForContacts:(id)a0;

@end
