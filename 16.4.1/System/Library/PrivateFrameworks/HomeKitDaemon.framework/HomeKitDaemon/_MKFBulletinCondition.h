@class Protocol, NSUUID, _MKFBulletinRegistration, NSPredicate, NSDate, MKFBulletinConditionDatabaseID, NSString;
@protocol MKFHome, MKFBulletinRegistration;

@interface _MKFBulletinCondition : _MKFModel <MKFBulletinCondition, MKFBulletinConditionPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFBulletinRegistration *bulletinRegistration;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFBulletinRegistration> bulletinRegistration;
@property (readonly, copy, nonatomic) MKFBulletinConditionDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfBulletinCondition;

@end
