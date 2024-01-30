@class NSString, TriggerValue, NSArray;

@interface TriggerCondition : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long type;
@property (nonatomic, retain) TriggerValue *value;
@property (nonatomic, copy) NSArray *recurrence;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
