@class NSPredicate, NSArray;

@interface ABSPersonFetchRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSArray *additionalKeysToFetch;
@property (readonly) unsigned int sortOrder;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionOfKeysToFetch;
- (id)descriptionOfSortOrder;
- (id)initWithPredicate:(id)a0 additionalKeysToFetch:(id)a1 sortOrder:(unsigned int)a2;

@end
