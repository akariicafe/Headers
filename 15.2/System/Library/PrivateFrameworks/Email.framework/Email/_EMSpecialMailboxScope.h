@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (BOOL)scopeContainsMailboxObjectID:(id)a0 mailboxTypeResolver:(id)a1;
- (BOOL)scopeContainsMailbox:(id)a0;
- (BOOL)excludeMailboxes;
- (void)encodeWithCoder:(id)a0;
- (id)mailboxScopeByAddingMailboxes:(id)a0;
- (id)mailboxScopeByRemovingMailboxes:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mailboxTypes;
- (id)ef_publicDescription;
- (id)initWithCoder:(id)a0;
- (id)mailboxObjectIDs;
- (id)cachedSelf;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)a0 forExclusion:(BOOL *)a1;
- (BOOL)excludeTypes;

@end
