@class NSString, DYGTGPUToolsVersionInfo, NSArray;

@interface DYGTDeviceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int platform;
@property (nonatomic) unsigned long long runtimeIdentifier;
@property (copy, nonatomic) NSString *permanentIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *metalVersion;
@property (nonatomic) unsigned int nativePointerSize;
@property (copy, nonatomic) DYGTGPUToolsVersionInfo *gputoolsVersionInfo;
@property (nonatomic) struct { double orientation; unsigned int width; unsigned int height; unsigned int scale; unsigned int type; } mainScreenDescriptor;
@property (copy, nonatomic) NSArray *profiles;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
