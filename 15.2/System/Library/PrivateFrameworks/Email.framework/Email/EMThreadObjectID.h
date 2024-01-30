@class EMThreadCollectionItemID, NSString, EMThreadScope;

@interface EMThreadObjectID : EMObjectID <EFPubliclyDescribable>

@property (readonly, nonatomic) EMThreadCollectionItemID *collectionItemID;
@property (readonly, nonatomic) long long conversationID;
@property (readonly, copy, nonatomic) EMThreadScope *threadScope;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCollectionItemID:(id)a0 threadScope:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConversationID:(long long)a0 threadScope:(id)a1;

@end
