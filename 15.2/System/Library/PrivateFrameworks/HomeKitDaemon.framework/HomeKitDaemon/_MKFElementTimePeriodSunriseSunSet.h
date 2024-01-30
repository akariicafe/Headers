@class Protocol, NSString, MKFElementTimePeriodSunriseSunSetDatabaseID, NSUUID, NSDateComponents, NSDate;
@protocol MKFBulletinConditionTimePeriod;

@interface _MKFElementTimePeriodSunriseSunSet : _MKFElementTimePeriod <MKFElementTimePeriodSunriseSunSet, MKFElementTimePeriodSunriseSunSetPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSDateComponents *offset;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *offset;
@property (copy, nonatomic) NSString *significantEvent;
@property (readonly, copy, nonatomic) MKFElementTimePeriodSunriseSunSetDatabaseID *databaseID;
@property (retain, nonatomic) id<MKFBulletinConditionTimePeriod> endCondition;
@property (retain, nonatomic) id<MKFBulletinConditionTimePeriod> startCondition;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (Class)backingModelClass;

- (id)castIfElementTimePeriodSunriseSunSet;

@end
