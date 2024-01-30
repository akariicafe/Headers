@class NSUUID, VNPersonsModel, NSString, HMIPersonsModelSummary;

@interface HMIPersonsModel : HMFObject <HMFLogging>

@property (readonly) VNPersonsModel *visionPersonsModel;
@property (readonly) NSUUID *homeUUID;
@property (readonly) NSUUID *sourceUUID;
@property (readonly, getter=isExternalLibrary) BOOL externalLibrary;
@property (readonly) HMIPersonsModelSummary *summary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithPersonsModel:(id)a0 homeUUID:(id)a1 sourceUUID:(id)a2 externalLibrary:(BOOL)a3;

@end
