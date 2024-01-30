@class NSString;

@interface IPAAdjustmentVersionInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *buildNumber;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long schemaRevision;

+ (id)systemBuildVersion;
+ (id)_systemBuildVersion;
+ (id)_systemVersionPlistPath;
+ (id)frameworkVersion;
+ (id)_frameworkVersion;
+ (id)currentVersionInfo;
+ (id)versionInfoFromArchivalRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)archivalRepresentation;
- (BOOL)isEqualToVersionInfo:(id)a0;

@end
