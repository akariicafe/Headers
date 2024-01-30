@class NSDictionary;

@interface SDKeyValueStore : NSObject

@property (class, readonly) NSDictionary *devicesDictionary;

+ (void)synchronize;
+ (id)deviceDictionaryForDeviceIdentifier:(id)a0;
+ (void)insertOrUpdateDevice:(id)a0;

@end
