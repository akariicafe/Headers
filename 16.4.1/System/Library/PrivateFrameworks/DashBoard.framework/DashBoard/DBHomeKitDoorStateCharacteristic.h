@interface DBHomeKitDoorStateCharacteristic : DBHomeKitCharacteristic

@property (nonatomic) long long doorStateValue;

+ (void)load;
+ (id)characteristicFormat;
+ (id)characteristicFormats;
+ (id)stringForDoorState:(long long)a0;

- (id)formatedValue;

@end
