@interface HDFitnessMachineCharacteristicDoubleField : HDFitnessMachineCharacteristicField

@property (nonatomic) double value;
@property (nonatomic) BOOL isSigned;

- (void)setValueWithBytes:(const char **)a0 before:(const char *)a1;
- (id)valueAsData;

@end
