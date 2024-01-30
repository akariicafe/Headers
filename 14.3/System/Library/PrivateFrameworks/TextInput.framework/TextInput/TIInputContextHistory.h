@class NSSet, NSMutableArray, NSString;

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *entries;
@property (readonly, nonatomic) NSMutableArray *pendingEntries;
@property (readonly, nonatomic) NSSet *senderIdentifiers;
@property (readonly, nonatomic) NSSet *recipientIdentifiers;
@property (readonly, nonatomic) NSSet *recipientNames;
@property (readonly, nonatomic) NSString *aggregateText;
@property (readonly, nonatomic) NSString *mostRecentNonSenderTextEntry;
@property (readonly, nonatomic) BOOL mostRecentTextEntryIsByMe;
@property (readonly, nonatomic) NSString *mostRecentTextEntryLogString;
@property (readonly, nonatomic) NSString *senderIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mostRecentTextEntries:(unsigned long long)a0;
- (void)assertCheckpointForCoding;
- (id)initWithCoder:(id)a0;
- (void)enumerateAllEntries:(id /* block */)a0;
- (void)_enumerateAllEntriesAsInputContextEntries:(id /* block */)a0;
- (void)enumeratePendingEntries:(id /* block */)a0;
- (void)appendPendingEntriesFromInputContextHistory:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)senderIdentifier;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifiers:(id)a1;
- (void)updateRecipientNames:(id)a0;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifier:(id)a1;
- (void)addTextEntry:(id)a0 timestamp:(id)a1;
- (void)addTextEntry:(id)a0 timestamp:(id)a1 senderIdentifier:(id)a2;
- (id)initWithRecipientIdentifiers:(id)a0;
- (BOOL)hasPendingEntries;
- (void)encodeWithCoder:(id)a0;

@end
