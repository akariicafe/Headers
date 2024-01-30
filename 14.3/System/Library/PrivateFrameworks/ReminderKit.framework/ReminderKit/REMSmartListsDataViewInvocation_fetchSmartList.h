@class NSString, NSArray;

@interface REMSmartListsDataViewInvocation_fetchSmartList : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *smartListTag;
@property (readonly, nonatomic) NSArray *reminderIDs;
@property (nonatomic) BOOL createIfNeeded;

- (id)initWithSmartListTag:(id)a0 reminderIDs:(id)a1 createIfNeeded:(BOOL)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
