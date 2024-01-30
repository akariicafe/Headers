@class NSString, REMObjectID;

@interface REMSmartListsDataViewInvocation_fetchSmartList : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *smartListType;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (nonatomic) BOOL createIfNeeded;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSmartListType:(id)a0 objectID:(id)a1 createIfNeeded:(BOOL)a2;

@end
