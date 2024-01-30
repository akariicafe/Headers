@class NSNumber, NSString;

@interface _GEOConfigKeyHelper : NSObject <NSCopying> {
    id _lastValue;
}

@property (readonly, nonatomic) struct { unsigned int identifier; void *metadata; } configKey;
@property (readonly, nonatomic) NSNumber *keyNumber;
@property (readonly, nonatomic) NSString *keyString;
@property (readonly, nonatomic) BOOL valueChanged;

+ (id)helperForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualTo_GEOConfigKeyHelper:(id)a0;
- (id)_currentValue;

@end
