@interface NUPriority : NSObject

@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic) double order;
@property (readonly, nonatomic) BOOL isHigh;
@property (readonly, nonatomic) BOOL isLow;

- (id)initWithLevel:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (id)initWithLevel:(long long)a0 order:(double)a1;
- (BOOL)isEqualToPriority:(id)a0;

@end
