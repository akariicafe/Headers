@class NSString, NSArray, MAFloatVector, MAIndexCache;

@interface MASeries : NSObject

@property (readonly, nonatomic) MAIndexCache *indexCache;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) MAFloatVector *vector;

- (id)description;
- (float)valueAtIndex:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 labels:(id)a1 vector:(id)a2;
- (id)initWithName:(id)a0 indexCache:(id)a1 vector:(id)a2;
- (id)valueForLabel:(id)a0;
- (id)valueByLabels;

@end
