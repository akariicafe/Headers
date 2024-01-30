@class NSString, NSDictionary;

@interface HFDifference : NSObject <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)difference:(id)a0;
+ (id)difference:(id)a0 priority:(unsigned long long)a1;
+ (id)difference:(id)a0 priority:(unsigned long long)a1 withBlock:(id /* block */)a2;

- (id)initWithKey:(id)a0;
- (id)descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_subclass_description;
- (id)initWithKey:(id)a0 priority:(unsigned long long)a1;
- (id)withPriority:(unsigned long long)a0;

@end
