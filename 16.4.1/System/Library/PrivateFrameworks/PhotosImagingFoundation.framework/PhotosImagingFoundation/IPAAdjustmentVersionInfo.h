@class NSString;

@interface IPAAdjustmentVersionInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *buildNumber;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long schemaRevision;

+ (id)frameworkVersion;
+ (id)systemBuildVersion;
+ (id)_frameworkVersion;
+ (id)currentVersionInfo;
+ (id)versionInfoFromArchivalRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)archivalRepresentation;
- (BOOL)isEqualToVersionInfo:(id)a0;

@end
