@class NSString, CNContact;

@interface _PSRecipient : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (nonatomic) BOOL familyHeuristic;
@property (copy, nonatomic) NSString *mostRecentTransportBundleId;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *handleString;
@property long long handleType;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) CNContact *contact;

+ (id)recipientForINPerson:(id)a0 contactResolver:(id)a1;

- (id)initWithIdentifier:(id)a0 handle:(id)a1 displayName:(id)a2 contact:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 handle:(id)a1 contact:(id)a2;
- (id)initWithIdentifier:(id)a0 senderHandle:(id)a1 handle:(id)a2 displayName:(id)a3 contact:(id)a4;
- (id)description;
- (id)initWithIdentifier:(id)a0 senderHandle:(id)a1 handle:(id)a2 displayName:(id)a3 contact:(id)a4 mostRecentTransportBundleId:(id)a5;
- (id)initWithIdentifier:(id)a0 handle:(id)a1 contact:(id)a2 mostRecentTransportBundleId:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
