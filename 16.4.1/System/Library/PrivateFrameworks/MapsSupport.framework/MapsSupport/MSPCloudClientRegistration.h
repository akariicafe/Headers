@class NSArray, NSString, MSPCloudClientRegistrationRecord, NSDate, NSUUID, CKContainer;

@interface MSPCloudClientRegistration : NSObject

@property (retain, nonatomic) MSPCloudClientRegistrationRecord *clientRecord;
@property (retain, nonatomic) NSArray *otherClientRecords;
@property (nonatomic) unsigned long long maxEarliestCompatibleEpoch;
@property (readonly, nonatomic) CKContainer *ckContainer;
@property (retain, nonatomic) NSDate *lastRegistrationUpdate;
@property (retain, nonatomic) NSDate *lastRegistrationFetch;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSUUID *clientIdentifier;

+ (id)zoneID;

- (void)fetchAccountIdentifierWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)checkClientCompatibilityWithGroup:(id)a0 completion:(id /* block */)a1;
- (void)fetchClientRegistrationRecordsCreatingZoneIfNecessaryWithGroup:(id)a0 completion:(id /* block */)a1;
- (void)fetchClientRegistrationRecordsWithGroup:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccountIdentifier:(id)a0 clientIdentifier:(id)a1;
- (void)pushClientRegistrationRecord:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)removeCloudRegistrationContainerWithGroup:(id)a0 completion:(id /* block */)a1;
- (void)setupCloudContainerWithGroup:(id)a0 completion:(id /* block */)a1;
- (void)updateClientRegistrationRecordWithGroup:(id)a0 completion:(id /* block */)a1;

@end
