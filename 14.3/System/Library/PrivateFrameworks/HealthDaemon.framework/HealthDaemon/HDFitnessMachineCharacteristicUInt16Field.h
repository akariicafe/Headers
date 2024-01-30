@interface HDFitnessMachineCharacteristicUInt16Field : HDFitnessMachineCharacteristicField

@property (nonatomic) unsigned short value;

- (void)setValueWithBytes:(const char **)a0 before:(const char *)a1;
- (id)valueAsData;

@end
