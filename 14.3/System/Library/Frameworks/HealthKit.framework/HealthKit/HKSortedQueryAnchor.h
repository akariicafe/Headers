@class NSNumber, NSArray;

@interface HKSortedQueryAnchor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *objectID;
@property (readonly, copy, nonatomic) NSArray *sortConstraints;

+ (id)sortConstraintsWithSortDescriptors:(id)a0 sample:(id)a1;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)a0;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)a0 includingSample:(id)a1 objectID:(long long)a2;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)a0 followingSample:(id)a1 objectID:(long long)a2;
+ (id)sortedQueryAnchorRelaxingConstraintsWithAnchor:(id)a0 error:(id *)a1;

- (id)init;
- (id)predicate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)canRelax;
- (BOOL)isEqual:(id)a0;
- (id)initWithSortConstraints:(id)a0 objectID:(id)a1;
- (id)querySortDescriptors;
- (BOOL)isCompatibleWithSortDescriptors:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
