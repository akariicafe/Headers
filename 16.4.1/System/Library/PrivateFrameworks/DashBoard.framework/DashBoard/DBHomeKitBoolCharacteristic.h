@interface DBHomeKitBoolCharacteristic : DBHomeKitCharacteristic

@property (nonatomic) BOOL boolValue;

+ (void)load;
+ (id)characteristicFormat;

- (id)formatedValue;

@end
