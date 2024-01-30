@class NSString;

@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *ubiquitousDatabasePath;
@property (nonatomic) BOOL supportsSyncProtocol;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *foreignDatabasePath;

+ (id)domainForSyncingMusicLibraryWithLibraryPath:(id)a0;
+ (id)domainForExtrasValues;
+ (id)allSyncingDomains;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDomainIdentifier:(id)a0 foreignDatabasePath:(id)a1;

@end
