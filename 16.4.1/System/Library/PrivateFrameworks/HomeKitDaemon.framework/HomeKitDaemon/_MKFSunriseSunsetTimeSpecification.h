@class Protocol, NSString, NSUUID, NSDate, NSDateComponents, NSNumber, MKFSunriseSunsetTimeSpecificationDatabaseID;
@protocol MKFTimePeriodBulletinCondition;

@interface _MKFSunriseSunsetTimeSpecification : _MKFBulletinTimeSpecification <MKFSunriseSunsetTimeSpecification, MKFSunriseSunsetTimeSpecificationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSDateComponents *offset;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSNumber *offsetSeconds;
@property (copy, nonatomic) NSString *significantEvent;
@property (readonly, copy, nonatomic) MKFSunriseSunsetTimeSpecificationDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) id<MKFTimePeriodBulletinCondition> endCondition;
@property (retain, nonatomic) id<MKFTimePeriodBulletinCondition> startCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfSunriseSunsetTimeSpecification;

@end
