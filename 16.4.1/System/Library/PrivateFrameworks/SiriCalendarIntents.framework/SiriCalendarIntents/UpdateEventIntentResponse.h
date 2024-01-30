@class CalendarEvent, NSString;

@interface UpdateEventIntentResponse : INIntentResponse

@property (nonatomic, retain) CalendarEvent *updatedEvent;
@property (nonatomic, copy) NSString *conflictingEventIdentifiers;
@property (nonatomic) long long confirmationReason;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
