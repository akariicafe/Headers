@class Protocol, NSUUID, NSString, NSDate, _MKFTimePeriodBulletinCondition, MKFBulletinTimeSpecificationDatabaseID;
@protocol MKFTimePeriodBulletinCondition;

@interface _MKFBulletinTimeSpecification : _MKFModel <MKFBulletinTimeSpecification, MKFBulletinTimeSpecificationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFTimePeriodBulletinCondition *endCondition;
@property (retain, nonatomic) _MKFTimePeriodBulletinCondition *startCondition;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) id<MKFTimePeriodBulletinCondition> endCondition;
@property (retain, nonatomic) id<MKFTimePeriodBulletinCondition> startCondition;
@property (readonly, copy, nonatomic) MKFBulletinTimeSpecificationDatabaseID *databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfBulletinTimeSpecification;

@end
