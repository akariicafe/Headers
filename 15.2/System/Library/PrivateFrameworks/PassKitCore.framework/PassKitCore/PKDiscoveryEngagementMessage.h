@class NSString, NSDictionary, PKDiscoveryEngagementMessageAction;

@interface PKDiscoveryEngagementMessage : PKDiscoveryObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long passQualifier;
@property (retain, nonatomic) NSString *titleKey;
@property (retain, nonatomic) NSString *messageKey;
@property (retain, nonatomic) NSDictionary *iconURLs;
@property (retain, nonatomic) PKDiscoveryEngagementMessageAction *action;
@property (nonatomic, getter=canReportIdentifierToAggd) BOOL reportIdentifierToAggd;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedMessage;

- (void)encodeWithCoder:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)updateForRuleResult:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)updateWithDiscoveryEngagementMessage:(id)a0;

@end
