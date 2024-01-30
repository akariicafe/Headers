@class NSDate;

@interface HDSPConfirmWakeUpIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *wakeUpConfirmedDate;
@property (readonly, nonatomic) NSDate *wakeUpConfirmedUntilDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithWakeUpConfirmedDate:(id)a0 wakeUpConfirmedUntilDate:(id)a1;

@end
