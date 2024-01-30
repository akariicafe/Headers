@class NSString;

@interface AMSSetItem : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) NSString *hashKey;

+ (id)setItemWithObject:(id)a0 hashKey:(id)a1;

- (id)initWithObject:(id)a0 hashKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
