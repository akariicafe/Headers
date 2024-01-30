@class NSPredicate, NSArray, NSString;

@interface _DKTombstoneRequirement : NSObject

@property (readonly) NSPredicate *predicate;
@property (readonly) NSPredicate *eventPredicate;
@property (readonly) NSArray *propertiesToFetch;
@property (readonly) NSString *identifier;

+ (id)requirement;

- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (void).cxx_destruct;

@end
