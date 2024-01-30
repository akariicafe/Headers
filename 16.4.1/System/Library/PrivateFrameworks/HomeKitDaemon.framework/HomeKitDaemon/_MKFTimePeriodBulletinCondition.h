@class Protocol, NSUUID, NSString, MKFTimePeriodBulletinConditionDatabaseID, _MKFBulletinTimeSpecification, NSDate;
@protocol MKFBulletinTimeSpecification, MKFHome, MKFBulletinRegistration;

@interface _MKFTimePeriodBulletinCondition : _MKFBulletinCondition <MKFTimePeriodBulletinCondition, MKFTimePeriodBulletinConditionPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFBulletinTimeSpecification *endElement;
@property (retain, nonatomic) _MKFBulletinTimeSpecification *startElement;
@property (retain, nonatomic) id<MKFBulletinTimeSpecification> endElement;
@property (retain, nonatomic) id<MKFBulletinTimeSpecification> startElement;
@property (readonly, copy, nonatomic) MKFTimePeriodBulletinConditionDatabaseID *databaseID;
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

- (id)materializeOrCreateEndElementRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (void)addEndElementObject:(id)a0;
- (void)addStartElementObject:(id)a0;
- (id)castIfTimePeriodBulletinCondition;
- (id)createEndElementRelationOfType:(id)a0 modelID:(id)a1;
- (id)createEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0;
- (id)createEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0;
- (id)createStartElementRelationOfType:(id)a0 modelID:(id)a1;
- (id)createStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0;
- (id)createStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0;
- (id)findEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0;
- (id)findEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0;
- (id)findStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0;
- (id)findStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0;
- (id)materializeOrCreateEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateStartElementRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (void)removeEndElementObject:(id)a0;
- (void)removeStartElementObject:(id)a0;

@end
