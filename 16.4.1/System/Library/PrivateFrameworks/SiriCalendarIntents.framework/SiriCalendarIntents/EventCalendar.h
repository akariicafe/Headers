@class NSString, NSNumber;

@interface EventCalendar : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSNumber *isImmutable;
@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic) long long type;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
