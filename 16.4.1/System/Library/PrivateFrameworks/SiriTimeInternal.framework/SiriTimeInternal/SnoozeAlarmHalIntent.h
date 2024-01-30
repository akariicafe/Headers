@class NSString, NSNumber;

@interface SnoozeAlarmHalIntent : INIntent

@property (nonatomic, copy) NSString *alarmId;
@property (nonatomic, copy) NSString *remoteDeviceId;
@property (nonatomic, copy) NSString *remoteExecutionId;
@property (nonatomic, retain) NSNumber *skipConfirmation;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
