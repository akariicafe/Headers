@class NSString, NSSet, NSDate;

@interface _CDInteractionAdvisorSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *callerBundleId;
@property (retain) NSDate *interactionDate;
@property (retain) NSString *interactionTitle;
@property (retain) NSSet *seedIdentifiers;
@property (retain) NSString *interactionLocationUUID;
@property (retain) NSString *contactPrefix;
@property (retain) NSSet *constrainDirections;
@property (retain) NSSet *constrainMechanisms;
@property (retain) NSSet *constrainBundleIds;
@property (retain) NSSet *constrainAccounts;
@property (retain) NSSet *constrainDomainIdentifiers;
@property (retain) NSSet *constrainLocationUUIDs;
@property (retain) NSSet *constrainSenders;
@property (retain) NSSet *constrainRecipients;
@property (retain) NSSet *constrainKeywords;
@property (retain) NSSet *constrainIdentifiers;
@property (retain) NSSet *constrainPersonIds;
@property (retain) NSSet *constrainPersonIdType;
@property long long constrainMaxRecipientCount;
@property unsigned long long resultLimit;
@property BOOL useFuture;
@property BOOL aggregateByIdentifier;
@property BOOL requireOutgoingInteraction;
@property (retain) NSSet *ignoreContactIdentifiers;
@property (retain) NSSet *ignoreInteractionUUIDs;
@property (retain, nonatomic) NSString *consumerIdentifier;

+ (id)extractContactIdentifiers:(id)a0;
+ (id)interactionAdvisorSettingsDefault;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)contactPredicate;
- (id)interactionPredicate;

@end
