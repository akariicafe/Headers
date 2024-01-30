@class NSString;

@interface BYDeviceConfiguration : NSObject

@property (nonatomic) NSString *productVersion;
@property (nonatomic) NSString *buildVersion;

+ (id)currentConfiguration;

- (id)init;

@end
