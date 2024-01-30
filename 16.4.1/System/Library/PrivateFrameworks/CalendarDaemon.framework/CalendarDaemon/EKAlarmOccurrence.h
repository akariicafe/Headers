@class NSTimeZone, NSString, NSURL, NSDate, CADObjectID;

@interface EKAlarmOccurrence : NSObject

@property (readonly, nonatomic) CADObjectID *alarmID;
@property (readonly, nonatomic) CADObjectID *ownerID;
@property (readonly, nonatomic) NSDate *ownerDate;
@property (readonly, nonatomic) NSTimeZone *ownerTimeZone;
@property (readonly, nonatomic) NSURL *ownerURI;
@property (readonly, nonatomic) NSDate *fireDate;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSDate *acknowledgedDate;

+ (id)alarmOccurrenceWithAlarmID:(id)a0 ownerID:(id)a1 ownerDate:(id)a2 ownerTimeZone:(id)a3 ownerURI:(id)a4 fireDate:(id)a5 externalID:(id)a6 acknowledgedDate:(id)a7;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlarmID:(id)a0 ownerID:(id)a1 ownerDate:(id)a2 ownerTimeZone:(id)a3 ownerURI:(id)a4 fireDate:(id)a5 externalID:(id)a6 acknowledgedDate:(id)a7;

@end
