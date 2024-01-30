@class MKFTimeOfDayTimeSpecificationDatabaseID, Protocol, NSUUID, NSString, NSDate, NSNumber;
@protocol MKFTimePeriodBulletinCondition;

@interface _MKFTimeOfDayTimeSpecification : _MKFBulletinTimeSpecification <MKFTimeOfDayTimeSpecification, MKFTimeOfDayTimeSpecificationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSNumber *minute;
@property (readonly, copy, nonatomic) MKFTimeOfDayTimeSpecificationDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) id<MKFTimePeriodBulletinCondition> endCondition;
@property (retain, nonatomic) id<MKFTimePeriodBulletinCondition> startCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfTimeOfDayTimeSpecification;

@end
