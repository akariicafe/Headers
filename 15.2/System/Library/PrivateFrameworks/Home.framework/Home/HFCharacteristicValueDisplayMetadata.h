@class HFServiceState, NSString, HFCharacteristicValueDisplayError, NAFuture;

@interface HFCharacteristicValueDisplayMetadata : NSObject

@property (nonatomic) long long primaryState;
@property (nonatomic) long long transitioningPrimaryState;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *sortKey;
@property (retain, nonatomic) HFCharacteristicValueDisplayError *error;
@property (retain, nonatomic) HFServiceState *serviceState;
@property (retain, nonatomic) NAFuture *splitAccountFuture;

+ (long long)_unknownStatePriorityForServiceDescriptor:(id)a0 characteristicReadResponse:(id)a1;
+ (id)_errorForSymptomHandler:(id)a0 isFixingCurrently:(BOOL)a1 withContextProvider:(id)a2;
+ (void)_displayAppleIDSplitErrorForMediaProfile:(id)a0 havingMetadata:(id)a1 withContextProvider:(id)a2;
+ (void)_populateSplitMediaAccountErrorForMedatadata:(id)a0 withContextProvider:(id)a1;
+ (id)displayMetadataForService:(id)a0 characteristicReadResponse:(id)a1;
+ (id)displayMetadataForAccessory:(id)a0 withContextProvider:(id)a1;
+ (id)displayMetadataForMediaProfile:(id)a0 withContextProvider:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)parseWarningSensorWithServiceType:(id)a0 response:(id)a1;
- (void)parseInformationalSensorWithServiceType:(id)a0 response:(id)a1;
- (void)parsePowerStateForServiceType:(id)a0 response:(id)a1;
- (void)parseActiveStateForServiceType:(id)a0 response:(id)a1;
- (void)parseCurrentTargetPositionForServiceType:(id)a0 response:(id)a1;
- (void)parseGarageDoorOpenerResponse:(id)a0;
- (void)parseLockMechanismResponse:(id)a0;
- (void)parseSecuritySystemResponse:(id)a0;
- (void)parseThermostatResponse:(id)a0 serviceType:(id)a1;
- (void)parseAirPurifierResponse:(id)a0;
- (void)parseHumidifierDehumidifierResponse:(id)a0;
- (void)parseProgammableSwitchOfType:(id)a0 response:(id)a1;

@end
