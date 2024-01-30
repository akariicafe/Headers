@interface KGBinaryPredicate : NSObject

@property (readonly, nonatomic) unsigned long long comparator;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithComparator:(unsigned long long)a0 value:(id)a1;

@end
