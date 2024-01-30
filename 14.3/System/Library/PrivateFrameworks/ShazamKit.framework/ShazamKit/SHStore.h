@interface SHStore : NSObject

@property (readonly, nonatomic) double minimumSignatureLength;
@property (readonly, nonatomic) double maximumSignatureLength;

- (id)deviceModel;
- (void)preload;
- (id)deviceOSVersion;
- (id)deviceProductVersion;
- (id)_init;
- (id)systemInfoByName:(char *)a0;
- (id)frameworkShortVersion;
- (id)deviceSystemName;
- (id)createMatcher;

@end
