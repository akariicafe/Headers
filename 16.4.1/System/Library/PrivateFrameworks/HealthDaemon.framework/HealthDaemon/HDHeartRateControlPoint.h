@interface HDHeartRateControlPoint : HDHealthServiceCharacteristic

@property (nonatomic) unsigned char operation;

+ (id)uuid;

- (id)initWithOperation:(unsigned char)a0;
- (id)description;
- (id)getBinaryValueWithError:(id *)a0;

@end
