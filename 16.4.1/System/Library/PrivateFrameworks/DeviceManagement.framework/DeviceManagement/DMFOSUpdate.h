@class NSString;

@interface DMFOSUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *productKey;
@property (readonly, copy, nonatomic) NSString *humanReadableName;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *build;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, nonatomic) unsigned long long installSize;
@property (readonly, nonatomic) BOOL isCritical;
@property (readonly, nonatomic) BOOL restartRequired;
@property (readonly, nonatomic) BOOL allowsInstallLater;
@property (readonly, nonatomic) BOOL isSplat;
@property (readonly, copy, nonatomic) NSString *supplementalBuild;
@property (readonly, copy, nonatomic) NSString *supplementalVersionExtra;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProductKey:(id)a0 humanReadableName:(id)a1 productName:(id)a2 version:(id)a3 build:(id)a4 downloadSize:(unsigned long long)a5 installSize:(unsigned long long)a6 isCritical:(BOOL)a7 restartRequired:(BOOL)a8 allowsInstallLater:(BOOL)a9 isSplat:(BOOL)a10 supplementalBuild:(id)a11 supplementalVersionExtra:(id)a12;

@end
