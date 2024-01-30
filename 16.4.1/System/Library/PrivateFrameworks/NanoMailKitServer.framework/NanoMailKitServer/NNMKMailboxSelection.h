@class NSArray, NSSet, NSMutableDictionary;

@interface NNMKMailboxSelection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *mailboxesWithAllMessagesSyncEnabled;
@property (nonatomic) unsigned long long aggregatedMailboxesFilterTypes;
@property (retain, nonatomic) NSArray *aggregatedMailboxes;
@property (retain, nonatomic) NSSet *mailboxesWithAllMessagesSyncEnabledIds;
@property (retain, nonatomic) NSSet *aggregatedMailboxesId;
@property (retain, nonatomic) NSArray *allMailboxesSyncEnabled;
@property (retain, nonatomic) NSMutableDictionary *allMailboxesSyncEnabledById;

+ (unsigned long long)firstFilterTypeFromTypes:(unsigned long long)a0;
+ (id)mailboxChangesApplyingSelection:(id)a0 previousSelection:(id)a1;

- (BOOL)hasSelection;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mailboxWithId:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAccounts:(id)a0;
- (void)_setupWithAccounts:(id)a0;
- (void)_setupWithMailboxes:(id)a0;
- (BOOL)containsMailboxFilter:(id)a0;
- (BOOL)hasAggregateMailboxesForAllMessagesOnly;
- (BOOL)hasSingleMailboxSelectionOnly;
- (id)initWithMailboxes:(id)a0;
- (BOOL)isMailboxFilterEnabled:(unsigned long long)a0;

@end
