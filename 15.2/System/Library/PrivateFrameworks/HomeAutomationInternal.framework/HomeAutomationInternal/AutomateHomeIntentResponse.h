@class NSUUID, NSArray;

@interface AutomateHomeIntentResponse : INIntentResponse

@property (nonatomic, copy) NSUUID *automationIdentifier;
@property (nonatomic, copy) NSArray *automatedEntityIdentifiers;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithPropertiesByName:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
