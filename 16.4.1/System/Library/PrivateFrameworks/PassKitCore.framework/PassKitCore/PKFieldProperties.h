@class NSArray, NSString, NSData;

@interface PKFieldProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long technology;
@property (readonly, nonatomic) long long terminalType;
@property (readonly, nonatomic) long long valueAddedServiceMode;
@property (readonly, nonatomic) long long accessTerminalSubtype;
@property (readonly, nonatomic) BOOL shouldIgnore;
@property (nonatomic) BOOL authenticationRequired;
@property (nonatomic) BOOL backgroundTransaction;
@property (nonatomic) BOOL secondaryPropertiesRequired;
@property (nonatomic) BOOL secondaryPropertiesAcquired;
@property (nonatomic) long long carKeyBrandCode;
@property (nonatomic) unsigned long long pairingRequested;
@property (nonatomic, getter=isECP2Field) BOOL ECP2Field;
@property (copy, nonatomic) NSArray *TCIs;
@property (copy, nonatomic) NSArray *merchantIdentifiers;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSData *readerIdentifier;

+ (id)fieldPropertiesForFieldNotification:(id)a0;
+ (id)fieldPropertiesForSTSFieldNotification:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTechnology:(unsigned long long)a0 terminalType:(long long)a1 accessTerminalSubtype:(long long)a2 valueAddedServiceMode:(long long)a3;

@end
