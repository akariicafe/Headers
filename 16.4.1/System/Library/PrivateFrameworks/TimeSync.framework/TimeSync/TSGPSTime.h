@interface TSGPSTime : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long nanosecondsSinceEpoch;
@property (readonly, nonatomic) unsigned int extendedWeek;
@property (readonly, nonatomic) unsigned short week;
@property (readonly, nonatomic) double seconds;
@property (readonly, nonatomic) unsigned long long nanoseconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (double)seconds;
- (unsigned long long)nanoseconds;
- (unsigned short)week;
- (id)initWithWeek:(unsigned int)a0 seconds:(double)a1 rollovers:(unsigned short)a2;
- (unsigned int)extendedWeek;
- (id)initWithExtendedWeek:(unsigned int)a0 nanoseconds:(unsigned long long)a1;
- (id)initWithExtendedWeek:(unsigned int)a0 seconds:(double)a1;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)a0;
- (id)initWithWeek:(unsigned int)a0 nanoseconds:(unsigned long long)a1 rollovers:(unsigned short)a2;

@end
