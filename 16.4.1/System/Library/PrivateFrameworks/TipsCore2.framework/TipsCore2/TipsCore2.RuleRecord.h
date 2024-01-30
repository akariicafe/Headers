@class NSDate, NSString, NSArray, _TtC9TipsCore29TipRecord, _TtC9TipsCore211EventRecord, _TtC9TipsCore210RuleRecord, NSDictionary, NSSet, _TtC9TipsCore211StateRecord;

@interface TipsCore2.RuleRecord : NSManagedObject

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *expression;
@property (nonatomic, copy) NSDate *lastEvaluated;
@property (nonatomic, copy) NSDictionary *ruleInfo;
@property (nonatomic) BOOL isDirty;
@property (nonatomic, retain) _TtC9TipsCore29TipRecord *tip;
@property (nonatomic, retain) _TtC9TipsCore211EventRecord *event;
@property (nonatomic, retain) _TtC9TipsCore211StateRecord *state;
@property (nonatomic, retain) _TtC9TipsCore210RuleRecord *parent;
@property (nonatomic, copy) NSSet *subrules;
@property (nonatomic) long long categoryValue;
@property (nonatomic) long long statusValue;
@property (nonatomic) long long typeValue;
@property (nonatomic) long long optionsValue;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
