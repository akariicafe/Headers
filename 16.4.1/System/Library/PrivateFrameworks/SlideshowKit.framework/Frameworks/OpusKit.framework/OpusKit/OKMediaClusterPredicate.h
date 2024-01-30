@class NSString;

@interface OKMediaClusterPredicate : NSObject

@property (copy, nonatomic) NSString *uniqueID;
@property (nonatomic) unsigned long long category;

+ (id)nameForCategory:(unsigned long long)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)title;
- (float)efficiencyForItems:(id)a0;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;

@end
