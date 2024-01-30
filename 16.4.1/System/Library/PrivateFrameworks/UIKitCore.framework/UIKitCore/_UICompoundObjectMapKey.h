@class NSString;

@interface _UICompoundObjectMapKey : NSObject <NSCopying> {
    id _object;
    NSString *_property;
}

+ (id)keyWithObject:(id)a0 andProperty:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
