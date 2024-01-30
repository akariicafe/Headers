@class NSString;

@interface AMSSetItem : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) NSString *hashKey;

+ (id)setItemWithObject:(id)a0 hashKey:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 hashKey:(id)a1;

@end
