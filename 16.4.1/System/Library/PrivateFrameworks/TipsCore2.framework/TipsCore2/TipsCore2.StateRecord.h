@class NSArray, NSString, NSDictionary, NSSet;

@interface TipsCore2.StateRecord : NSManagedObject

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSString *id;
@property (nonatomic) BOOL isTransient;
@property (nonatomic) long long defaultValue;
@property (nonatomic) long long currentValue;
@property (nonatomic, copy) NSDictionary *stateInfo;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic) long long optionsValue;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
