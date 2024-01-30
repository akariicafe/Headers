@interface FPPair : NSObject <NSCopying>

@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqualToPair:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
