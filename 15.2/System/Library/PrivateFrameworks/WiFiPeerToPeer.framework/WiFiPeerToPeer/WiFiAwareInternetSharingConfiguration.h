@class NSString, NSObject;

@interface WiFiAwareInternetSharingConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *interfaceName;
@property (nonatomic) BOOL provider;
@property (nonatomic) BOOL automatic;
@property (retain, nonatomic) NSObject *policy;

+ (id)automaticallyProvideInternetToResponders;
+ (id)automaticallyRequestInternetFromInitiators;
+ (id)provideInternetToInitiatorsFromInterface:(id)a0;
+ (id)requestInterentFromResponder;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInterfaceName:(id)a0 isProvider:(BOOL)a1 isAutomatic:(BOOL)a2;
- (BOOL)interfaceNameEqual:(id)a0;

@end
