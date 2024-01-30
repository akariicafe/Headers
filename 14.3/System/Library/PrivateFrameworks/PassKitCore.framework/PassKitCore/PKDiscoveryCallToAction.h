@class NSString, NSDictionary, PKDiscoveryMedia, PKColor, NSArray, NSSet;

@interface PKDiscoveryCallToAction : NSObject <NSSecureCoding> {
    NSArray *_paymentNetworks;
    NSSet *_allowedFeatureIdentifiers;
    NSSet *_transitNetworkIdentifiers;
    NSString *_referrerIdentifier;
    BOOL _foregroundContentModeIsSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) NSString *localizedButtonText;
@property (readonly, nonatomic) NSString *titleKey;
@property (readonly, nonatomic) NSString *subtitleKey;
@property (readonly, nonatomic) NSString *buttonTextKey;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) NSDictionary *actionInfo;
@property (readonly, nonatomic) NSString *referrerIdentifier;
@property (readonly, nonatomic) PKDiscoveryMedia *icon;
@property (nonatomic, getter=shouldRoundIcon) BOOL roundIcon;
@property (readonly, nonatomic) PKColor *backgroundColor;
@property (nonatomic) long long foregroundContentMode;
@property (readonly, nonatomic) long long paymentSetupMode;
@property (readonly, nonatomic) NSArray *paymentNetworks;
@property (readonly, nonatomic) NSSet *allowedFeatureIdentifiers;
@property (readonly, nonatomic) NSSet *transitNetworkIdentifiers;

- (void).cxx_destruct;
- (void)localizeWithBundle:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
