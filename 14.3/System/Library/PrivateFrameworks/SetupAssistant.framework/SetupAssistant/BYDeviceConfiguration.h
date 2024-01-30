@class NSString;

@interface BYDeviceConfiguration : NSObject

@property (nonatomic) NSString *productVersion;

+ (id)currentConfiguration;

- (id)init;

@end
