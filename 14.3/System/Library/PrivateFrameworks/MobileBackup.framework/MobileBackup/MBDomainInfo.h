@class NSString;

@interface MBDomainInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isAppDomain) BOOL appDomain;
@property (nonatomic, getter=isSystemApp) BOOL systemApp;
@property (readonly, nonatomic, getter=isCameraRollDomain) BOOL cameraRollDomain;
@property (retain, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long remoteSize;
@property (nonatomic) unsigned long long localSize;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isRestricted) BOOL restricted;

+ (id)domainNameForBundleID:(id)a0;
+ (id)domainInfoWithName:(id)a0 systemApp:(BOOL)a1 remoteSize:(unsigned long long)a2 localSize:(unsigned long long)a3 enabled:(BOOL)a4 restricted:(BOOL)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithDomainName:(id)a0 systemApp:(BOOL)a1 remoteSize:(unsigned long long)a2 localSize:(unsigned long long)a3 enabled:(BOOL)a4 restricted:(BOOL)a5;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
