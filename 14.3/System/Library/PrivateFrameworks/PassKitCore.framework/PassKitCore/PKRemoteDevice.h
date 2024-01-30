@class PKRemotePaymentInstrument, NSString, NSArray, NSUUID, NSDate;

@interface PKRemoteDevice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSDate *lastSeen;
@property (readonly, nonatomic) BOOL canMakePayments;
@property (nonatomic) long long proximityState;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) BOOL userDisabled;
@property (nonatomic) BOOL deviceDisabled;
@property (retain, nonatomic) NSArray *remotePaymentInstruments;
@property (retain, nonatomic) PKRemotePaymentInstrument *defaultRemotePaymentInstrument;
@property (copy, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSUUID *bluetoothUUID;
@property (nonatomic) BOOL supportsFaceID;
@property (retain, nonatomic) NSArray *supportedSetupFeatures;

+ (id /* block */)acceptedComparatorForSupportedNetworks:(id)a0 merchantCapabilities:(unsigned long long)a1 webService:(id)a2;
+ (id /* block */)preferenceComparator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRemoteDevice:(id)a0;
- (long long)_deviceTypeForModelIdentifier:(id)a0;
- (id)initWithIDSDevice:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)pk_idsDestination;
- (void)encodeWithCoder:(id)a0;

@end
