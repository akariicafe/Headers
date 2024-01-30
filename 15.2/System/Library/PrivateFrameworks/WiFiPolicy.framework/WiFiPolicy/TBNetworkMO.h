@class NSString, NSSet, NSArray, NSDate, TBTileMO;
@protocol TBScore;

@interface TBNetworkMO : NSManagedObject <TBNetwork, NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *remoteIdentifier;
@property (readonly, nonatomic) NSString *SSID;
@property (readonly, nonatomic) unsigned long long authMask;
@property (readonly, nonatomic) NSString *authDescription;
@property (readonly, nonatomic) NSString *attributesDescription;
@property (readonly, nonatomic) NSSet *accessPoints;
@property (readonly, nonatomic) NSArray *ownerIdentifiers;
@property (readonly, nonatomic, getter=isCaptive) BOOL captive;
@property (readonly, nonatomic, getter=isMoving) BOOL moving;
@property (readonly, nonatomic, getter=isSuspicious) BOOL suspicious;
@property (readonly, nonatomic, getter=isPublic) BOOL public;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long venueGroup;
@property (readonly, nonatomic) unsigned int venueType;
@property (readonly, nonatomic) unsigned long long tileKey;
@property (readonly, nonatomic) unsigned long long accessPointCount;
@property (readonly, nonatomic) double centroidLat;
@property (readonly, nonatomic) double centroidLng;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TBScore> popularityScore;
@property (readonly, nonatomic) id<TBScore> qualityScore;
@property (readonly, nonatomic) long long accessPointCount;
@property (nonatomic) long long authMask;
@property (nonatomic) BOOL captive;
@property (nonatomic) double centroidLat;
@property (nonatomic) double centroidLng;
@property (copy, nonatomic) NSDate *created;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL moving;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *ownerIdentifiers;
@property (nonatomic) int popularityScoreValue;
@property (nonatomic) BOOL public;
@property (nonatomic) int qualityScoreValue;
@property (nonatomic) BOOL suspicious;
@property (readonly, nonatomic) long long tileKey;
@property (nonatomic) long long timestamp;
@property (nonatomic) long long type;
@property (nonatomic) long long venueGroup;
@property (nonatomic) int venueType;
@property (retain, nonatomic) NSSet *accessPoints;
@property (retain, nonatomic) TBTileMO *tile;

+ (id)entityName;
+ (id)fetchRequest;
+ (void)removeNetworksUsingPredicate:(id)a0 moc:(id)a1;
+ (id)generateNewNetworkObjectFromMOC:(id)a0;
+ (void)removeAllNetworksInMOC:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;

@end
