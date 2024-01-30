@class VNPersonsModelFaceModel, VNPersonsModelConfiguration;
@protocol VNPersonsModelDataSource;

@interface VNPersonsModel : NSObject {
    VNPersonsModelConfiguration *_configuration;
    id<VNPersonsModelDataSource> _dataSource;
    unsigned long long _lastDataChangeSequenceNumber;
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}

@property (readonly, copy, nonatomic) VNPersonsModelConfiguration *configuration;

+ (id)configurationFromLoadedObjects:(id)a0 error:(id *)a1;
+ (id)newModelFromVersion:(unsigned long long)a0 objects:(id)a1 error:(id *)a2;
+ (Class)_modelClassForKind:(unsigned int)a0 error:(id *)a1;
+ (id)versionNumbersEncodedInClass:(Class)a0 withMethodNamePrefix:(id)a1 suffix:(id)a2;
+ (id)supportedReadVersions;
+ (id)_readModelObjectsFromStream:(id)a0 options:(id)a1 actionBlock:(id /* block */)a2 progressBlock:(id /* block */)a3 modelClass:(Class *)a4 version:(unsigned long long *)a5 error:(id *)a6;
+ (id)_modelFromStream:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)modelFromStream:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)_modelFromUnopenedStream:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)modelFromData:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)modelFromURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)_modelInformationFromUnopenedStream:(id)a0 error:(id *)a1;
+ (id)informationForModelWithData:(id)a0 error:(id *)a1;
+ (id)informationForModelWithURL:(id)a0 error:(id *)a1;
+ (BOOL)readObjectForVersion1Tag:(unsigned int)a0 fromInputStream:(id)a1 intoObjectDictionary:(id)a2 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id)description;
- (id)trainingFaceObservationsForPersonWithUniqueIdentifier:(id)a0 canceller:(id)a1 error:(id *)a2;
- (id)upToDateFaceModelWithCanceller:(id)a0 error:(id *)a1;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (id)faceCountsForAllPersons;
- (id)_dataSourceAndReturnError:(id *)a0;
- (id)initWithConfiguration:(id)a0 dataSource:(id)a1;
- (BOOL)updateInternalConfigurationWithModelFaceprintRequestRevision:(unsigned long long)a0 error:(id *)a1;
- (id)predictPersonFromFaceObservation:(id)a0 limit:(unsigned long long)a1 canceller:(id)a2 error:(id *)a3;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)a0;
- (id)faceObservationsForPersonWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (unsigned long long)indexOfFaceprintObjectFrom:(id)a0 withEquivalentDescriptorTo:(id)a1;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)a0;

@end
