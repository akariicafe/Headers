@class NSNumber, NSDateComponents, RecurrenceRule;

@interface DateComponentsRange : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDateComponents *start;
@property (nonatomic, copy) NSDateComponents *end;
@property (nonatomic, retain) RecurrenceRule *recurrenceRule;
@property (nonatomic, retain) NSNumber *allDay;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
