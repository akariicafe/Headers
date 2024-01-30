@class NSString;
@protocol HDFitnessMachinePairingManagerDelegate;

@interface HDFitnessMachinePairingManager : NSObject <HDFitnessMachineConnectionInitiatorProtocol>

@property (weak, nonatomic) id<HDFitnessMachinePairingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)workoutAppIsReady;
- (void)handleBLEConnectionCompletedSuccessfully:(BOOL)a0;
- (void)updatedFitnessMachine;
- (void)updatedFitnessMachineState:(unsigned long long)a0 fitnessMachineSessionUUID:(id)a1;
- (void)updatedConnectionStateWithError:(id)a0;
- (void)deliverError:(id)a0;
- (void)registerConnectionInitiatorClient:(id)a0 withConnectionUUID:(id)a1;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)a0 activityType:(unsigned long long)a1 withConnectionUUID:(id)a2;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)a0 withConnectionUUID:(id)a1;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)a0;
- (void)simulateAccept;

@end
