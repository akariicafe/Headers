@class BRFieldCKInfo, NSString, NSSet, NSData, BRCUserRowID, NSNumber;

@interface BRCVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mtime;
@property (retain, nonatomic) NSString *originalPOSIXName;
@property (nonatomic) long long size;
@property (nonatomic) long long thumbnailSize;
@property (retain, nonatomic) NSData *xattrSignature;
@property (retain, nonatomic) NSData *quarantineInfo;
@property (retain, nonatomic) NSData *contentSignature;
@property (retain, nonatomic) NSData *thumbnailSignature;
@property (retain, nonatomic) NSSet *conflictLoserEtags;
@property (retain, nonatomic) NSNumber *lastEditorDeviceOrUserRowID;
@property (retain, nonatomic) NSNumber *lastEditorDeviceRowID;
@property (retain, nonatomic) NSString *lastEditorDeviceName;
@property (retain, nonatomic) BRCUserRowID *lastEditorRowID;
@property (retain, nonatomic) BRFieldCKInfo *ckInfo;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL hasThumbnail;
@property (retain, nonatomic) NSData *lazyXattr;
@property (retain, nonatomic) NSNumber *editedSinceShared;

- (id)uti;
- (id)initWithVersion:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainst:(id)a0;
- (BOOL)check:(id)a0 logToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1;
- (BOOL)isEtagEqual:(id)a0;
- (BOOL)_hasLastEditorDeviceRowID;
- (BOOL)_hasLastEditorRowID;
- (id)lastEditorUserIdentityWithDB:(id)a0;
- (id)lastEditorDeviceDisplayNameWithDB:(id)a0;
- (id)lastEditorDisplayNameWithDB:(id)a0;
- (id)displayNameWithoutExtension:(BOOL)a0;
- (id)additionNameForItemID:(id)a0 zoneID:(id)a1;
- (BOOL)isSmallAndMostRecentClientsGenerateThumbnails;

@end
