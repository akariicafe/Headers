@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)excludeMailboxes;
- (id)cachedSelf;
- (id)ef_publicDescription;
- (BOOL)scopeContainsMailboxObjectID:(id)a0 mailboxTypeResolver:(id)a1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mailboxScopeByAddingMailboxes:(id)a0;
- (id)mailboxObjectIDs;
- (id)mailboxScopeByRemovingMailboxes:(id)a0;
- (id)mailboxTypes;
- (BOOL)isEqual:(id)a0;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)a0 forExclusion:(BOOL *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)excludeTypes;
- (BOOL)scopeContainsMailbox:(id)a0;

@end
