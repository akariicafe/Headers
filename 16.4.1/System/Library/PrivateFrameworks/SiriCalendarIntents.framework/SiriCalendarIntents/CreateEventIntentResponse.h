@class NSString, NSArray;

@interface CreateEventIntentResponse : INIntentResponse

@property (nonatomic, copy) NSString *createdEvent;
@property (nonatomic) long long confirmationReason;
@property (nonatomic, copy) NSArray *conflictingEventIdentifiers;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
