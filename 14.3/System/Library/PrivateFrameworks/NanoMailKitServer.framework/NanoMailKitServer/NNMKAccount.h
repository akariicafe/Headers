@class NSString, NSArray;

@interface NNMKAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *parentAccountIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL shouldArchive;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *defaultEmailAddress;
@property (nonatomic) unsigned long long standaloneState;
@property (retain, nonatomic) NSArray *mailboxes;

+ (id)generateAccountIdForAccount:(id)a0;
+ (id)inboxesFromAccounts:(id)a0;
+ (id)generateIdentifierFromEmailsAddresses:(id)a0;

- (BOOL)maySupportStandaloneMode;
- (BOOL)isiCloud;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
