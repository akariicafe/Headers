@class NSString, NSURL, NSDate;

@interface NNMKMailbox : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL databaseContentVerified;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long filterType;
@property (retain, nonatomic) NSString *mailboxId;
@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *accountLocalId;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *customName;
@property (nonatomic) BOOL syncEnabled;
@property (nonatomic) BOOL syncRequested;
@property (nonatomic) BOOL syncActive;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL hasSelection;
@property (nonatomic) BOOL isPushEnabled;
@property (readonly, nonatomic) NSString *displayName;

+ (unsigned long long)syncedTypeFromFilterType:(unsigned long long)a0;
+ (id)idsFromMailboxes:(id)a0;
+ (unsigned long long)messageStateForMailboxFilterType:(unsigned long long)a0;
+ (id)generateMailboxIdWithAccountId:(id)a0 mailboxName:(id)a1;
+ (unsigned long long)syncedTypeFromMailbox:(id)a0;
+ (unsigned long long)defaultFilterTypes;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldFilter;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasFilterType:(unsigned long long)a0;
- (void)resetURL;
- (BOOL)hasCompoundFilters;
- (id)initWithFilterType:(unsigned long long)a0;
- (BOOL)isSelectedForFilterType:(unsigned long long)a0;
- (BOOL)hasAnyFilter;
- (void)addFilterType:(unsigned long long)a0;
- (void)removeFilterType:(unsigned long long)a0;

@end
