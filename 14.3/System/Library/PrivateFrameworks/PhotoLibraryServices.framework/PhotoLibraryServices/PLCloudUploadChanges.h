@class NSMutableArray, NSMutableSet;

@interface PLCloudUploadChanges : NSObject

@property (retain, nonatomic) NSMutableArray *insertedAssets;
@property (retain, nonatomic) NSMutableArray *updatedAssets;
@property (retain, nonatomic) NSMutableSet *adjustedAssetUuids;
@property (retain, nonatomic) NSMutableSet *propertyChangedAssetUuids;
@property (retain, nonatomic) NSMutableSet *faceChangedAssetUuids;
@property (retain, nonatomic) NSMutableArray *updatedMasters;
@property (retain, nonatomic) NSMutableArray *insertedResources;
@property (retain, nonatomic) NSMutableArray *updatedResources;
@property (retain, nonatomic) NSMutableArray *albumInserts;
@property (retain, nonatomic) NSMutableArray *albumChanges;
@property (retain, nonatomic) NSMutableArray *memoryChanges;
@property (retain, nonatomic) NSMutableArray *personChanges;
@property (retain, nonatomic) NSMutableArray *faceCropChanges;
@property (retain, nonatomic) NSMutableArray *suggestionChanges;
@property (retain, nonatomic) NSMutableSet *updatedRelationship;
@property (retain, nonatomic) NSMutableArray *deletedRecords;

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)summaryDescription;

@end
