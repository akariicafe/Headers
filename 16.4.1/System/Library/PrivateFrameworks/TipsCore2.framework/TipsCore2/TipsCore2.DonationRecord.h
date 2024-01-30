@class NSArray, NSDictionary, _TtC9TipsCore211EventRecord, NSDate;

@interface TipsCore2.DonationRecord : NSManagedObject

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDictionary *donationInfo;
@property (nonatomic, retain) _TtC9TipsCore211EventRecord *event;
@property (nonatomic) long long optionsValue;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
