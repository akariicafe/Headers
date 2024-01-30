@class NSArray;

@interface REMListsDataViewInvocation_dataAccessFetchByObjectIDIncludingMarkedForDelete : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objectIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithObjectIDs:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
