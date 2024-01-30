@class NSString, NSURL, NSSet;

@interface PKTransitPartner : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSURL *purchaseURL;
@property (readonly, copy, nonatomic) NSSet *supportedTransitNetworkIdentifiers;
@property (nonatomic) long long maxNotificationCount;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 localizedDisplayName:(id)a1;
- (id)initWithIdentifier:(id)a0 localizedDisplayName:(id)a1 purchaseURL:(id)a2 supportedTransitNetworkIdentifiers:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
