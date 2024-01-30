@class NSString;

@interface UARPAssetVersion : NSObject

@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly) unsigned long long releaseVersion;
@property (readonly) unsigned long long buildVersion;
@property (readonly) BOOL isValid;
@property (readonly) NSString *versionString;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 releaseVersion:(unsigned long long)a2 buildVersion:(unsigned long long)a3;

@end
