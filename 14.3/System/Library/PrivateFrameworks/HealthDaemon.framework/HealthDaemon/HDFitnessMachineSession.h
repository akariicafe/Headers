@class NSUUID, NSString, NSArray, NSData, HKHealthService, HDFitnessMachineStatus, NSDate, HDFitnessMachineSessionRecoveryConfiguration, _HKFitnessMachine, HDEnhancedFTMSData, HDHealthServiceOOBInfo, HDFitnessMachineDataCharacteristicBase;

@interface HDFitnessMachineSession : NSObject

@property (retain, nonatomic) NSArray *oobDataArray;
@property (readonly, nonatomic) NSUUID *fitnessMachineSessionUUID;
@property (readonly, nonatomic) NSString *nfcSessionID;
@property (readonly, nonatomic) NSData *nfcSessionIDData;
@property (nonatomic) unsigned long long healthServiceSessionIdentifier;
@property (retain, nonatomic) HKHealthService *healthService;
@property (nonatomic) long long serviceStatus;
@property (retain, nonatomic) _HKFitnessMachine *fitnessMachine;
@property (retain, nonatomic) HDHealthServiceOOBInfo *oobInfo;
@property (readonly, nonatomic) NSArray *nfcConnectionHandoverData;
@property (nonatomic) BOOL waitingOnInitialMachineStatus;
@property (retain, nonatomic) HDFitnessMachineStatus *initialMachineStatus;
@property (nonatomic) BOOL waitingOnInitialMachineData;
@property (retain, nonatomic) HDFitnessMachineDataCharacteristicBase *initialMachineData;
@property (retain, nonatomic) HDEnhancedFTMSData *initialEnhancedFTMSData;
@property (nonatomic) unsigned long long connectionState;
@property (nonatomic) unsigned long long machineState;
@property (retain, nonatomic) NSDate *machineStartDate;
@property (retain, nonatomic) NSDate *machineStateUpdateDate;
@property (retain, nonatomic) NSDate *machinePreferredUntilDate;
@property (readonly, nonatomic) BOOL dataTransferPermitted;
@property (readonly, nonatomic) BOOL waitingOnMFA;
@property (readonly, nonatomic) BOOL waitingOnBluetoothConnection;
@property (readonly, nonatomic) BOOL waitingOnActivityType;
@property (readonly, nonatomic) BOOL dataTransferRequirementsComplete;
@property (readonly, nonatomic) HDFitnessMachineSessionRecoveryConfiguration *recoveryConfiguration;

+ (id)serviceFromRecoveryConfiguration:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)markMFAAuthenticated;
- (void)markBluetoothConnectionComplete;
- (id)initWithRecoveryConfiguration:(id)a0;
- (void)markActivityTypeProvided;
- (void)markDataTransferPermitted;
- (id)_initWithFitnessMachineSessionUUID:(id)a0;
- (id)initWithNFCSessionIDData:(id)a0;
- (void)setFitnessMachineName:(id)a0 type:(unsigned long long)a1 identifier:(id)a2;
- (id)_oobDataArrayWithRandomValue:(id)a0 confirmationValue:(id)a1 sessionID:(id)a2 btAddress:(id)a3;

@end
