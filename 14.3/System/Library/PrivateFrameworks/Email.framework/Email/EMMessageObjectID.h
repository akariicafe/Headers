@class EMMessageCollectionItemID, EMMailboxScope;

@interface EMMessageObjectID : EMObjectID

@property (readonly, nonatomic) EMMessageCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long globalMessageID;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGlobalMessageID:(long long)a0 mailboxScope:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithCollectionItemID:(id)a0 predicate:(id)a1 mailboxTypeResolver:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCollectionItemID:(id)a0 mailboxScope:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
