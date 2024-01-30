@interface NCManagerToken : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long value;

+ (id)tokenWithValue:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
