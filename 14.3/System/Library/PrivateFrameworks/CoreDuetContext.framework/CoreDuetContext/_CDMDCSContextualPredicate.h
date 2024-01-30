@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)predicates;
+ (id)predicateForNetworkQualityFair;
+ (BOOL)supportsSecureCoding;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForNextAlarm;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateWithIdentifier:(id)a0;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)predicateForForegroundApp;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)predicateForPhotosAppBecameForeground;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)plistDictionary;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)initWithPlistDictionary:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
