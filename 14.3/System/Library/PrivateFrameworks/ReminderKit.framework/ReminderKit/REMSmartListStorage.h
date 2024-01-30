@class NSString, NSArray, REMResolutionTokenMap, NSData, REMObjectID;

@interface REMSmartListStorage : NSObject <NSCopying, NSSecureCoding, REMSortingStyleReadWriteProtocol, REMObjectIDProviding> {
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMObjectID *objectID;
@property (copy, nonatomic) NSString *smartListTag;
@property (retain, nonatomic) NSArray *ordering;
@property (nonatomic) BOOL isPersisted;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (copy, nonatomic) NSString *sortingStyle;
@property (nonatomic) long long sortingDirection;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (id)cdKeyToStorageKeyMap;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (unsigned long long)storeGeneration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithObjectID:(id)a0 smartListTag:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
