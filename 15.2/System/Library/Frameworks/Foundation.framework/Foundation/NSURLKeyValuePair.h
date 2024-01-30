@interface NSURLKeyValuePair : NSObject {
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)a0 value:(id)a1;

- (void)setValue:(id)a0;
- (void)setKey:(id)a0;
- (id)value;
- (id)key;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (void)dealloc;

@end
