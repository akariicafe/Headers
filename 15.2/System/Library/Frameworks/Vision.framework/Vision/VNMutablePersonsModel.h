@class NSString, VNPersonsModelFaceModel, VNPersonsModelData;

@interface VNMutablePersonsModel : VNPersonsModel <VNPersonsModelDataDelegate> {
    VNPersonsModelData *_modelData;
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedWriteVersions;
+ (id)configurationFromLoadedObjects:(id)a0 error:(id *)a1;
+ (id)_version1ModelWithObjects:(id)a0 error:(id *)a1;
+ (id)newModelFromVersion:(unsigned long long)a0 objects:(id)a1 error:(id *)a2;

- (id)initWithConfiguration:(id)a0;
- (BOOL)writeToURL:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_lastModificationDate;
- (void).cxx_destruct;
- (void)personsModelDataWasModified:(id)a0;
- (void)_modelWasModified;
- (id)upToDateFaceModelWithCanceller:(id)a0 error:(id *)a1;
- (BOOL)_writeVersion1InformationToOutputStream:(id)a0 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a1 error:(id *)a2;
- (BOOL)_writeVersion1ConfigurationToOutputStream:(id)a0 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a1 error:(id *)a2;
- (BOOL)writeVersion1ToOutputStream:(id)a0 options:(id)a1 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a2 error:(id *)a3;
- (BOOL)_writeReadOnlyVersion:(unsigned long long)a0 toOutputStream:(id)a1 options:(id)a2 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a3 error:(id *)a4;
- (BOOL)writeReadOnlyVersion1ToOutputStream:(id)a0 options:(id)a1 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a2 error:(id *)a3;
- (BOOL)_getModelWritingImplementation:(void /* function */ **)a0 selector:(SEL *)a1 forVersion:(unsigned long long)a2 readOnly:(BOOL)a3;
- (BOOL)_getModelWritingImplementation:(void /* function */ **)a0 selector:(SEL *)a1 version:(unsigned long long *)a2 forOptions:(id)a3;
- (BOOL)writeToStream:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)_writeToUnopenedStream:(id)a0 options:(id)a1 error:(id *)a2;
- (id)dataWithOptions:(id)a0 error:(id *)a1;
- (BOOL)addFaceObservations:(id)a0 toPersonWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (BOOL)removeFaceObservations:(id)a0 fromPersonWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (BOOL)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removePersonWithUniqueIdentifier:(id)a0 error:(id *)a1;

@end
