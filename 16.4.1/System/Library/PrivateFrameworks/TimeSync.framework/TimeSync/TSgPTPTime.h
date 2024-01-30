@interface TSgPTPTime : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long nanosecondsSinceEpoch;
@property (readonly, nonatomic) unsigned long long seconds;
@property (readonly, nonatomic) unsigned int nanoseconds;
@property (readonly, nonatomic) unsigned long long grandmasterIdentity;
@property (readonly, nonatomic) unsigned short localPortNumber;
@property (readonly, nonatomic, getter=isPTPTimescale) BOOL ptpTimescale;
@property (readonly, nonatomic, getter=isTimeTraceable) BOOL timeTraceable;
@property (readonly, nonatomic, getter=isFrequencyTraceable) BOOL frequencyTraceable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (unsigned long long)seconds;
- (unsigned int)nanoseconds;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)a0 onGrandmaster:(unsigned long long)a1 withLocalPortNumber:(unsigned short)a2 ptpTimescale:(BOOL)a3 timeTraceable:(BOOL)a4 frequencyTraceable:(BOOL)a5;
- (id)initWithSeconds:(unsigned long long)a0 nanoseconds:(unsigned int)a1 onGrandmaster:(unsigned long long)a2 withLocalPortNumber:(unsigned short)a3 ptpTimescale:(BOOL)a4 timeTraceable:(BOOL)a5 frequencyTraceable:(BOOL)a6;

@end
