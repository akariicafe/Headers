@class NSUUID, MKFBulletinConditionPresenceDatabaseID, NSArray, NSDate, NSSet, NSString, Protocol, NSNumber;
@protocol MKFBulletinRegistration;

@interface _MKFBulletinConditionPresence : _MKFBulletinCondition <MKFBulletinConditionPresence, MKFBulletinConditionPresencePrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *presenceEventType;
@property (copy, nonatomic) NSNumber *presenceEventUserType;
@property (retain, nonatomic) NSSet *users_;
@property (copy, nonatomic) NSNumber *presenceEventType;
@property (copy, nonatomic) NSNumber *presenceEventUserType;
@property (readonly, retain, nonatomic) NSArray *users;
@property (readonly, copy, nonatomic) MKFBulletinConditionPresenceDatabaseID *databaseID;
@property (readonly, retain, nonatomic) id<MKFBulletinRegistration> bulletinRegistration;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfBulletinConditionPresence;
- (void)addUsersObject:(id)a0;
- (id)materializeOrCreateUsersRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findUsersRelationWithModelID:(id)a0;
- (void)removeUsersObject:(id)a0;

@end
