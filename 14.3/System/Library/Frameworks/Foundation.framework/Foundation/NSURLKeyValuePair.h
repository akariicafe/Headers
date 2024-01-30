@interface NSURLKeyValuePair : NSObject {
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)a0 value:(id)a1;

- (void)setKey:(id)a0;
- (void)dealloc;
- (id)value;
- (unsigned long long)hash;
- (id)description;
- (id)key;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;
- (void)setValue:(id)a0;

@end
