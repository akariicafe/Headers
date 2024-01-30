@class NSUUID;

@interface CRIndexElement : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *replica;
@property (nonatomic) long long integer;

+ (id)elementWithInteger:(long long)a0 replica:(id)a1;

- (long long)compare:(id)a0;
- (unsigned long long)hashValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInteger:(long long)a0 replica:(id)a1;

@end
