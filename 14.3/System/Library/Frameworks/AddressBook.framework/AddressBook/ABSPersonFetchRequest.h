@class NSPredicate, NSArray;

@interface ABSPersonFetchRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSArray *additionalKeysToFetch;
@property (readonly) unsigned int sortOrder;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionOfSortOrder;
- (id)descriptionOfKeysToFetch;
- (id)initWithPredicate:(id)a0 additionalKeysToFetch:(id)a1 sortOrder:(unsigned int)a2;

@end
