@class NSPredicate, NSArray, NSString;

@interface EFQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class targetClass;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) unsigned long long queryOptions;
@property (readonly, copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqualToQuery:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)debugDescription;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 queryOptions:(unsigned long long)a3 label:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
