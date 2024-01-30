@interface IMPair : NSObject <NSCopying>

@property (retain) id first;
@property (retain) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
