@interface NSURLKeyValuePair : NSObject {
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)a0 value:(id)a1;

- (id)key;
- (void)setKey:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;
- (id)value;
- (unsigned long long)hash;
- (id)description;
- (void)setValue:(id)a0;

@end
