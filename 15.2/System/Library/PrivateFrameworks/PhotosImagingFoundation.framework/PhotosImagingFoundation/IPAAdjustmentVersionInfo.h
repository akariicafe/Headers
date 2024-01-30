@class NSString;

@interface IPAAdjustmentVersionInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *buildNumber;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long schemaRevision;

+ (id)_systemBuildVersion;
+ (id)systemBuildVersion;
+ (id)_systemVersionPlistPath;
+ (id)frameworkVersion;
+ (id)_frameworkVersion;
+ (id)currentVersionInfo;
+ (id)versionInfoFromArchivalRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)archivalRepresentation;
- (BOOL)isEqualToVersionInfo:(id)a0;

@end
