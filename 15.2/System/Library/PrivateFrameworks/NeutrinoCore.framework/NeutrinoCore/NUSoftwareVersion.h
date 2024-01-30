@class NSString;

@interface NUSoftwareVersion : NSObject <NSCopying>

@property (copy) NSString *platform;
@property (copy) NSString *buildNumber;
@property (copy) NSString *appVersion;
@property long long schemaRevision;

+ (id)_systemBuildVersion;
+ (id)systemBuildVersion;
+ (id)currentSoftwareVersion;
+ (id)_systemVersionPlistPath;
+ (id)frameworkVersion;
+ (id)_frameworkVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToSoftwareVersion:(id)a0;
- (id)archivalRepresentation;

@end
