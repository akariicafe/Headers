@interface FPPair : NSObject <NSCopying>

@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPair:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
