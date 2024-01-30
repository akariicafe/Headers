@class NSSet, NSString;

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct set<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { struct __tree<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<NSHolder<_TIInputContextEntry>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<NSHolder<_TIInputContextEntry>>> { unsigned long long __value_; } __pair3_; } __tree_; } entries;
@property (readonly, nonatomic) struct set<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { struct __tree<NSHolder<_TIInputContextEntry>, std::less<NSHolder<_TIInputContextEntry>>, std::allocator<NSHolder<_TIInputContextEntry>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<NSHolder<_TIInputContextEntry>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<NSHolder<_TIInputContextEntry>>> { unsigned long long __value_; } __pair3_; } __tree_; } pendingEntries;
@property (readonly, nonatomic) NSSet *senderIdentifiers;
@property (readonly, nonatomic) NSSet *recipientIdentifiers;
@property (readonly, nonatomic) NSSet *recipientNames;
@property (readonly, nonatomic) NSString *aggregateText;
@property (readonly, nonatomic) NSString *mostRecentNonSenderTextEntry;
@property (readonly, nonatomic) BOOL mostRecentTextEntryIsByMe;
@property (readonly, nonatomic) NSString *mostRecentTextEntryLogString;
@property (readonly, nonatomic) NSString *senderIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (BOOL)hasPendingEntries;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTextEntry:(id)a0 timestamp:(id)a1;
- (void)addTextEntry:(id)a0 timestamp:(id)a1 senderIdentifier:(id)a2;
- (void)assertCheckpointForCoding;
- (id)initWithRecipientIdentifiers:(id)a0;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifier:(id)a1;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifiers:(id)a1;
- (id)mostRecentTextEntries:(unsigned long long)a0;
- (id)senderIdentifier;
- (void)updateRecipientNames:(id)a0;
- (void)_enumerateAllEntriesAsInputContextEntries:(id /* block */)a0;
- (void)appendPendingEntriesFromInputContextHistory:(id)a0;
- (void)enumerateAllEntries:(id /* block */)a0;
- (void)enumeratePendingEntries:(id /* block */)a0;
- (id)mostRecentTextEntry;

@end
