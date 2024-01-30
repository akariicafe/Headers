@class NSNumber, NSDateComponents;

@interface SleepAlarmAttribute : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSNumber *override;
@property (nonatomic, copy) NSDateComponents *bedtime;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
