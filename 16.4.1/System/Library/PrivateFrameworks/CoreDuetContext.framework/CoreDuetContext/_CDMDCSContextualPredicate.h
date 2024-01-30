@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (id)predicates;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateForNetworkQualityFair;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateForNextAlarm;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateForForegroundApp;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)predicateWithIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)plistDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPlistDictionary:(id)a0;
- (void).cxx_destruct;

@end
