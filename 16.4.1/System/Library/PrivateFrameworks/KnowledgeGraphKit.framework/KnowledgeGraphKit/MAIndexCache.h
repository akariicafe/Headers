@class NSDictionary, NSArray;

@interface MAIndexCache : NSObject

@property (readonly, nonatomic) NSDictionary *cache;
@property (readonly, copy, nonatomic) NSArray *labels;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithLabels:(id)a0;
- (long long)indexOfLabel:(id)a0;

@end
