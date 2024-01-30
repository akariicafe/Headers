@interface ASCPair : NSObject <NSCopying>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
