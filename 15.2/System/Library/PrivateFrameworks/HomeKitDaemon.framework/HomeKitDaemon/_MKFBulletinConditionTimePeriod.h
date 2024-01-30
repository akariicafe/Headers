@class Protocol, MKFBulletinConditionTimePeriodDatabaseID, NSUUID, NSString, NSDate, _MKFElementTimePeriod;
@protocol MKFElementTimePeriod, MKFBulletinRegistration;

@interface _MKFBulletinConditionTimePeriod : _MKFBulletinCondition <MKFBulletinConditionTimePeriod, MKFBulletinConditionTimePeriodPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFElementTimePeriod *endElement;
@property (retain, nonatomic) _MKFElementTimePeriod *startElement;
@property (retain, nonatomic) id<MKFElementTimePeriod> endElement;
@property (retain, nonatomic) id<MKFElementTimePeriod> startElement;
@property (readonly, copy, nonatomic) MKFBulletinConditionTimePeriodDatabaseID *databaseID;
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

- (id)castIfBulletinConditionTimePeriod;
- (id)materializeOrCreateStartElementRelationOfTypeElementTimePeriodTimeOfDayWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEndElementRelationOfTypeElementTimePeriodTimeOfDayWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateStartElementRelationOfTypeElementTimePeriodSunriseSunSetWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEndElementRelationOfTypeElementTimePeriodSunriseSunSetWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEndElementRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)findEndElementRelationOfTypeElementTimePeriodSunriseSunSetWithModelID:(id)a0;
- (id)findEndElementRelationOfTypeElementTimePeriodTimeOfDayWithModelID:(id)a0;
- (void)addEndElementObject:(id)a0;
- (void)removeEndElementObject:(id)a0;
- (id)materializeOrCreateStartElementRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)findStartElementRelationOfTypeElementTimePeriodSunriseSunSetWithModelID:(id)a0;
- (id)findStartElementRelationOfTypeElementTimePeriodTimeOfDayWithModelID:(id)a0;
- (void)addStartElementObject:(id)a0;
- (void)removeStartElementObject:(id)a0;

@end
