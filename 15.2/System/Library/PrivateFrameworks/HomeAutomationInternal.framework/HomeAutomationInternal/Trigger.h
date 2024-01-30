@class NSString, TriggerValue;

@interface Trigger : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long type;
@property (nonatomic, retain) TriggerValue *value;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
