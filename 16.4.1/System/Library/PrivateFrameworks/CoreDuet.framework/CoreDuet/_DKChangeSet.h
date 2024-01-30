@class NSString, NSArray, NSUUID, NSDate;

@interface _DKChangeSet : NSObject <_DKProtobufConverting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *eventsToAdd;
@property (retain, nonatomic) NSArray *eventIDsToDelete;
@property (retain, nonatomic) NSUUID *deviceIdentifier;
@property (nonatomic) unsigned long long sequenceNumber;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *type;

+ (id)fromPBCodable:(id)a0;
+ (id)_createFromData:(id)a0 deviceIdentifier:(id)a1 sequenceNumber:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4;
+ (id)additionChangeSetEntityName;
+ (id)createFromData:(id)a0 deviceIdentifier:(id)a1 sequenceNumber:(unsigned long long)a2;
+ (id)createFromData:(id)a0 deviceIdentifier:(id)a1 sequenceNumber:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4;
+ (id)dataFromCompressedChangeSet:(id)a0;
+ (id)deletionChangeSetEntityName;

- (id)insertInManagedObjectContext:(id)a0;
- (id)asData;
- (id)toPBCodable;
- (id)initWithManagedObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventIDsToDelete:(id)a0 deviceIdentifier:(id)a1 sequenceNumber:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4;
- (id)initWithEventsToAdd:(id)a0 deviceIdentifier:(id)a1 sequenceNumber:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4;
- (id)initWithEventsToAdd:(id)a0 eventIDsToDelete:(id)a1 deviceIdentifier:(id)a2 sequenceNumber:(unsigned long long)a3;
- (id)initWithEventsToAdd:(id)a0 eventIDsToDelete:(id)a1 deviceIdentifier:(id)a2 sequenceNumber:(unsigned long long)a3 startDate:(id)a4 endDate:(id)a5 type:(id)a6;

@end
