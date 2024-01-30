@class NSDictionary;

@interface DBHomeKitCharacteristicTypes : NSObject

@property (class, readonly, nonatomic) NSDictionary *characteristicTypeByName;
@property (class, readonly, nonatomic) NSDictionary *characteristicNameByType;

+ (id)characteristicNameForType:(id)a0;

@end
