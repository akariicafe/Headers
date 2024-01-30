@class NSString;

@interface SGSearchableItemIdTriple : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *uniqueId;

+ (id)searchableItemIdTripleWithBundleId:(id)a0 domainId:(id)a1 uniqueId:(id)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)a0 domainId:(id)a1 uniqueId:(id)a2;
- (BOOL)isEqualToSearchableItemIdTriple:(id)a0;

@end
