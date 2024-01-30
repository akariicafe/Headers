@protocol NSObject;

@interface EFPair : NSObject <NSCopying>

@property (readonly, nonatomic) id<NSObject> first;
@property (readonly, nonatomic) id<NSObject> second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqualToPair:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
