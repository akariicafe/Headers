@class NSDate, NSString, NSArray, NSManagedObjectContext, NSSet, _TtC9TipsCore27Message, NSDictionary, _TtC9TipsCore25Asset, NSError;

@interface TipsCore2.TipRecord : NSManagedObject

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSString *id;
@property (nonatomic, retain) _TtC9TipsCore27Message *title;
@property (nonatomic, retain) _TtC9TipsCore27Message *message;
@property (nonatomic, retain) _TtC9TipsCore25Asset *asset;
@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSDictionary *tipInfo;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, copy) NSSet *events;
@property (nonatomic) long long statusValue;
@property (nonatomic) long long dismissalReasonValue;
@property (nonatomic) long long actionPerformedCount;
@property (nonatomic) long long displayCount;
@property (nonatomic, copy) NSArray *displayDates;
@property (nonatomic, copy) NSDate *lastProcessedUsage;
@property (nonatomic) long long maxDisplayCount;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)updateEligibilityIn:(NSManagedObjectContext *)a0 completionHandler:(void (^)(NSError *))a1;
- (BOOL)updateEligibilityIn:(id)a0 error:(id *)a1;

@end
