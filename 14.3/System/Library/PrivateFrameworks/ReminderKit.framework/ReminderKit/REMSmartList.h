@class NSArray, NSString, REMResolutionTokenMap, NSData, REMStore, REMObjectID, REMSmartListStorage;

@interface REMSmartList : NSObject <REMObjectIDProviding, REMSortingStyleReadonlyProtocol>

@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (copy, nonatomic) REMSmartListStorage *storage;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (nonatomic) BOOL isPersisted;
@property (readonly, nonatomic) REMStore *store;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (copy, nonatomic) NSString *smartListTag;
@property (retain, nonatomic) NSArray *ordering;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) NSString *sortingStyle;
@property (readonly, nonatomic) long long sortingDirection;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0 storage:(id)a1;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)remObjectID;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
