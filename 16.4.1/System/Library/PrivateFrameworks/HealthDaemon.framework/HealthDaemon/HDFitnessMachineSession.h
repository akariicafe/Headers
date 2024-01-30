@class NSUUID, NSString, NSArray, NSData, HKHealthService, HDFitnessMachineStatus, NSDate, HDFitnessMachineSessionRecoveryConfiguration, _HKFitnessMachine, HDEnhancedFTMSData, HDHealthServiceOOBInfo, HDFitnessMachineDataCharacteristicBase;

@interface HDFitnessMachineSession : NSObject {
    NSArray *_oobDataArray;
}

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
- (void)markBluetoothConnectionComplete;
- (id)initWithNFCSessionIDData:(id)a0;
- (id)initWithRecoveryConfiguration:(id)a0;
- (void)markActivityTypeProvided;
- (void)markDataTransferPermitted;
- (void)markMFAAuthenticated;
- (void)setFitnessMachineName:(id)a0 type:(unsigned long long)a1 identifier:(id)a2;

@end
