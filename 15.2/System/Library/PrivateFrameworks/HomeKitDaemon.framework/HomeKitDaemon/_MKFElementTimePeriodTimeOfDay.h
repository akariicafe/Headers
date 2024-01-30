@class MKFElementTimePeriodTimeOfDayDatabaseID, Protocol, NSUUID, NSString, NSDate, NSNumber;
@protocol MKFBulletinConditionTimePeriod;

@interface _MKFElementTimePeriodTimeOfDay : _MKFElementTimePeriod <MKFElementTimePeriodTimeOfDay, MKFElementTimePeriodTimeOfDayPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSNumber *minute;
@property (readonly, copy, nonatomic) MKFElementTimePeriodTimeOfDayDatabaseID *databaseID;
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

- (id)castIfElementTimePeriodTimeOfDay;

@end
