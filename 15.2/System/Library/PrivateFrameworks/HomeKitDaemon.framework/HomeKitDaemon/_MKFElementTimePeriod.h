@class MKFElementTimePeriodDatabaseID, _MKFBulletinConditionTimePeriod, Protocol, NSUUID, NSDate, NSString;
@protocol MKFBulletinConditionTimePeriod;

@interface _MKFElementTimePeriod : _MKFModel <MKFElementTimePeriod, MKFElementTimePeriodPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFBulletinConditionTimePeriod *endCondition;
@property (retain, nonatomic) _MKFBulletinConditionTimePeriod *startCondition;
@property (retain, nonatomic) id<MKFBulletinConditionTimePeriod> endCondition;
@property (retain, nonatomic) id<MKFBulletinConditionTimePeriod> startCondition;
@property (readonly, copy, nonatomic) MKFElementTimePeriodDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (Class)backingModelClass;

- (id)castIfElementTimePeriod;
- (id)materializeOrCreateEndConditionRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findEndConditionRelationWithModelID:(id)a0;
- (void)addEndConditionObject:(id)a0;
- (void)removeEndConditionObject:(id)a0;
- (id)materializeOrCreateStartConditionRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findStartConditionRelationWithModelID:(id)a0;
- (void)addStartConditionObject:(id)a0;
- (void)removeStartConditionObject:(id)a0;

@end
