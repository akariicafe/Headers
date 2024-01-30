@class NSUUID, NSString, _MKFAccessory, NSDate, NSArray, Protocol, MKFAnalysisEventBulletinRegistrationDatabaseID, NSNumber;
@protocol MKFHome, MKFAccessory, MKFUser;

@interface _MKFAnalysisEventBulletinRegistration : _MKFBulletinRegistration <MKFAnalysisEventBulletinRegistration, MKFAnalysisEventBulletinRegistrationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *classifierOptions;
@property (retain, nonatomic) _MKFAccessory *accessory;
@property (copy, nonatomic) NSNumber *classifierOptions;
@property (retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, copy, nonatomic) MKFAnalysisEventBulletinRegistrationDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfAnalysisEventBulletinRegistration;

@end
