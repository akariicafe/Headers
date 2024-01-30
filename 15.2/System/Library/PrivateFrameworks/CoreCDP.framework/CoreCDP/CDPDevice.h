@class NSString, NSDictionary, NSData, NSDate, NSNumber;

@interface CDPDevice : NSObject <NSCopying, NSSecureCoding, CDPDeviceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *modelClass;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *recordID;
@property (copy, nonatomic) NSString *machineID;
@property (copy, nonatomic) NSDate *recordDate;
@property (nonatomic) BOOL hasRandomSecret;
@property (nonatomic) BOOL hasNumericSecret;
@property (copy, nonatomic) NSNumber *numericSecretLength;
@property (nonatomic) BOOL isUsingMultipleiCSC;
@property (nonatomic) unsigned long long remainingAttempts;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL isCurrentDevice;
@property (nonatomic) unsigned long long recoveryStatus;
@property (retain, nonatomic) NSNumber *coolOffPeriod;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *enclosureColor;
@property (copy, nonatomic) NSDictionary *recordInfo;
@property (copy, nonatomic) NSData *simplePublicKey;
@property (readonly, nonatomic) unsigned long long localSecretType;
@property (copy, nonatomic) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
