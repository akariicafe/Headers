@interface HDHeartRateControlPoint : HDHealthServiceCharacteristic

@property (nonatomic) unsigned char operation;

+ (id)uuid;

- (id)description;
- (id)initWithOperation:(unsigned char)a0;
- (id)getBinaryValueWithError:(id *)a0;

@end
