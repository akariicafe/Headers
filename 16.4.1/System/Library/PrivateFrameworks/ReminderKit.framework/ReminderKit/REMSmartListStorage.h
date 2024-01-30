@class NSUUID, NSString, REMObjectID, NSDate, NSData, REMColor, REMAccountCapabilities, REMResolutionTokenMap, REMManualOrdering;

@interface REMSmartListStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding> {
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (retain, nonatomic) REMObjectID *objectID;
@property (copy, nonatomic) NSString *smartListType;
@property (retain, nonatomic) REMManualOrdering *manualOrdering;
@property (copy, nonatomic) NSString *sortingStyle;
@property (copy, nonatomic) NSDate *pinnedDate;
@property (retain, nonatomic) NSUUID *mostRecentTargetTemplateIdentifier;
@property (nonatomic) BOOL showingLargeAttachments;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (retain, nonatomic) NSData *filterData;
@property (nonatomic) BOOL isPersisted;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)objectIDWithUUID:(id)a0;
+ (id)newObjectID;

- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)cdKeyToStorageKeyMap;
- (unsigned long long)storeGeneration;
- (void)setMinimumSupportedVersion:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)optionalObjectID;
- (BOOL)isUnsupported;
- (id)description;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 smartListType:(id)a2;

@end
