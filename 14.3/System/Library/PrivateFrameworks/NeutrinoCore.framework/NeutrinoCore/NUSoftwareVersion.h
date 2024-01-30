@class NSString;

@interface NUSoftwareVersion : NSObject <NSCopying>

@property (copy) NSString *platform;
@property (copy) NSString *buildNumber;
@property (copy) NSString *appVersion;
@property long long schemaRevision;

+ (id)systemBuildVersion;
+ (id)_systemBuildVersion;
+ (id)currentSoftwareVersion;
+ (id)_systemVersionPlistPath;
+ (id)frameworkVersion;
+ (id)_frameworkVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSoftwareVersion:(id)a0;
- (id)archivalRepresentation;

@end
