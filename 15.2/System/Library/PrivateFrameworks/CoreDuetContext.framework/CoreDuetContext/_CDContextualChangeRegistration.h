@class NSString, _CDContextualPredicate;

@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) _CDContextualPredicate *predicate;
@property (retain, nonatomic) _CDContextualPredicate *dismissalPolicy;
@property (nonatomic) unsigned long long deviceSet;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) BOOL mustWake;
@property (nonatomic) BOOL isDeserialized;
@property (copy, nonatomic) NSString *locationManagerEffectiveBundleID;
@property (copy, nonatomic) NSString *locationManagerEffectiveBundlePath;
@property (copy) id /* block */ informativeCallback;
@property (readonly, copy) id /* block */ callback;
@property (readonly, nonatomic) unsigned long long deviceTypes;
@property (readonly, nonatomic) unsigned int qualityOfService;

+ (id)localWakingRegistrationWithIdentifier:(id)a0 contextualPredicate:(id)a1 clientIdentifier:(id)a2 callback:(id /* block */)a3;
+ (id)localNonWakingRegistrationWithIdentifier:(id)a0 contextualPredicate:(id)a1 clientIdentifier:(id)a2 callback:(id /* block */)a3;
+ (id)registrationWithIdentifier:(id)a0 contextualPredicate:(id)a1 dismissalPolicy:(id)a2 deviceSet:(unsigned long long)a3 clientIdentifier:(id)a4 mustWake:(BOOL)a5 callback:(id /* block */)a6;
+ (id)localWakingRegistrationWithIdentifier:(id)a0 contextualPredicate:(id)a1 callback:(id /* block */)a2;
+ (id)registrationWithIdentifier:(id)a0 contextualPredicate:(id)a1 dismissalPolicy:(id)a2 deviceSet:(unsigned long long)a3 mustWake:(BOOL)a4 callback:(id /* block */)a5;
+ (id)localNonWakingRegistrationWithIdentifier:(id)a0 contextualPredicate:(id)a1 callback:(id /* block */)a2;
+ (id)registrationWithIdentifier:(id)a0 contextualPredicate:(id)a1 deviceTypes:(unsigned long long)a2 clientIdentifier:(id)a3 mustWake:(BOOL)a4 qualityOfService:(unsigned int)a5 callback:(id /* block */)a6;
+ (id)registrationWithIdentifier:(id)a0 contextualPredicate:(id)a1 deviceTypes:(unsigned long long)a2 clientIdentifier:(id)a3 mustWake:(BOOL)a4 callback:(id /* block */)a5;
+ (id)registrationWithIdentifier:(id)a0 contextualPredicate:(id)a1 dismissalPolicy:(id)a2 deviceSet:(unsigned long long)a3 clientIdentifier:(id)a4 mustWake:(BOOL)a5 qualityOfService:(unsigned int)a6 callback:(id /* block */)a7;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 contextualPredicate:(id)a1 dismissalPolicy:(id)a2 deviceSet:(unsigned long long)a3 deviceTypes:(unsigned long long)a4 clientIdentifier:(id)a5 mustWake:(BOOL)a6 callback:(id /* block */)a7;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 contextualPredicate:(id)a1 dismissalPolicy:(id)a2 deviceSet:(unsigned long long)a3 deviceTypes:(unsigned long long)a4 clientIdentifier:(id)a5 mustWake:(BOOL)a6 qualityOfService:(unsigned int)a7 informativeCallback:(id /* block */)a8;
- (BOOL)isMultiDeviceRegistration;

@end
