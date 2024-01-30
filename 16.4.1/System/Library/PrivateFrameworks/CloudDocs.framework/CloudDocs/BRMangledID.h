@class NSString;

@interface BRMangledID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isCloudDocsMangledID;
@property (readonly, nonatomic) BOOL isPassbookMangledID;
@property (readonly, nonatomic) BOOL isCorporateMangledID;
@property (readonly, nonatomic) BOOL isDesktopMangledID;
@property (readonly, nonatomic) BOOL isDocumentsMangledID;
@property (readonly, nonatomic) NSString *appLibraryOrZoneName;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) NSString *mangledIDString;
@property (readonly, nonatomic) NSString *aliasTargetContainerString;

+ (id)_sharedMangledIDStringWithContainerID:(id)a0 ownerName:(id)a1 validate:(BOOL)a2;
+ (id)sideCarMangledID;
+ (id)_ownerNameFromSharedMangledIDString:(id)a0 validate:(BOOL)a1;
+ (BOOL)validateOwnerName:(id)a0;
+ (id)sharedDatabaseMangledID;
+ (BOOL)validateMangledIDString:(id)a0;
+ (id)cloudDocsMangledID;
+ (id)containerMetadataMangledID;
+ (id)documentsMangledID;
+ (id)_containerIDFromSharedContainerID:(id)a0 validate:(BOOL)a1;
+ (id)_mangledIDStringFromZoneName:(id)a0 ownerName:(id)a1 validate:(BOOL)a2;
+ (id)desktopMangledID;
+ (id)_privateMangledContainerID:(id)a0 validate:(BOOL)a1;
+ (BOOL)validateContainerID:(id)a0;
+ (id)_privateUnmangledContainerID:(id)a0 validate:(BOOL)a1;
+ (id)_containerIDFromSharedMangledIDString:(id)a0 validate:(BOOL)a1;
+ (id)zoneHealthMangledID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1;
- (id)initWithRecordZoneID:(id)a0;
- (id)initWithAppLibraryName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAliasTargetContainerString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToMangledID:(id)a0;
- (id)initWithMangledString:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
