@class NSString, NSArray, PKDiscoveryCallToAction, PKDiscoveryCard;

@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *itemIdentifier;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) PKDiscoveryCard *card;
@property (readonly, nonatomic) NSArray *shelves;
@property (readonly, nonatomic) PKDiscoveryCallToAction *footerLockup;
@property (copy, nonatomic) id /* block */ actionOnDismiss;
@property (readonly, nonatomic, getter=hasRequestedBadge) BOOL requestedBadge;

- (void).cxx_destruct;
- (void)localizeWithBundle:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)setForItem:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;
- (BOOL)isEqualForUI:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
