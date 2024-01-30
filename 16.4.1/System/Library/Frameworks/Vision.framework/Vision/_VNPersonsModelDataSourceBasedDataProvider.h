@class NSString, VNPersonsModel;
@protocol VNPersonsModelDataSource;

@interface _VNPersonsModelDataSourceBasedDataProvider : NSObject <VNPersonsModelFaceModelDataProvider> {
    VNPersonsModel *_personsModel;
    id<VNPersonsModelDataSource> _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)a0 forPersonAtIndex:(unsigned long long)a1;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)a0;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)a0;
- (unsigned long long)faceModelPersonsCount;
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)a0;
- (id)initWithPersonsModel:(id)a0 dataSource:(id)a1;

@end
