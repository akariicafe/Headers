@class NSString;

@interface SGSearchableItemIdTriple : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *uniqueId;

+ (id)searchableItemIdTripleWithBundleId:(id)a0 domainId:(id)a1 uniqueId:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 domainId:(id)a1 uniqueId:(id)a2;
- (BOOL)isEqualToSearchableItemIdTriple:(id)a0;

@end
