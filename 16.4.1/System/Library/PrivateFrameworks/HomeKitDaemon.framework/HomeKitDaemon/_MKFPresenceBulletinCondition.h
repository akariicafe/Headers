@class NSUUID, NSDate, NSArray, MKFPresenceBulletinConditionDatabaseID, NSSet, NSString, Protocol, NSNumber;
@protocol MKFHome, MKFBulletinRegistration;

@interface _MKFPresenceBulletinCondition : _MKFBulletinCondition <MKFPresenceBulletinCondition, MKFPresenceBulletinConditionPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *presenceEventType;
@property (copy, nonatomic) NSNumber *presenceEventUserType;
@property (retain, nonatomic) NSSet *users_;
@property (copy, nonatomic) NSNumber *presenceEventType;
@property (copy, nonatomic) NSNumber *presenceEventUserType;
@property (readonly, retain, nonatomic) NSArray *users;
@property (readonly, copy, nonatomic) MKFPresenceBulletinConditionDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFBulletinRegistration> bulletinRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (void)addUsersObject:(id)a0;
- (id)castIfPresenceBulletinCondition;
- (id)findUsersRelationWithModelID:(id)a0;
- (id)materializeOrCreateUsersRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (void)removeUsersObject:(id)a0;

@end
