@class NSString, NSNumber;

@interface DismissTimerIntent : INIntent

@property (nonatomic, copy) NSString *timerId;
@property (nonatomic, copy) NSString *remoteDeviceId;
@property (nonatomic, retain) NSNumber *skipConfirmation;
@property (nonatomic, copy) NSString *remoteExecutionId;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
