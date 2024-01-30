@class NSString;
@protocol HDFitnessMachinePairingManagerDelegate;

@interface HDFitnessMachinePairingManager : NSObject <HDFitnessMachineConnectionInitiatorProtocol>

@property (weak, nonatomic) id<HDFitnessMachinePairingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActivityType:(unsigned long long)a0;
- (id)initWithProfile:(id)a0;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)a0 withConnectionUUID:(id)a1;
- (void).cxx_destruct;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)a0 activityType:(unsigned long long)a1 withConnectionUUID:(id)a2;
- (void)registerConnectionInitiatorClient:(id)a0 withConnectionUUID:(id)a1;
- (void)simulateAccept;
- (void)reset;
- (void)workoutAppIsReady;
- (void)updatedFitnessMachine;
- (void)handleBLEConnectionCompletedSuccessfully:(BOOL)a0;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)a0;
- (void)updatedFitnessMachineState:(unsigned long long)a0 fitnessMachineSessionUUID:(id)a1;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)a0 withConnectionUUID:(id)a1;
- (void)deliverError:(id)a0;
- (void)updatedConnectionStateWithError:(id)a0;

@end
