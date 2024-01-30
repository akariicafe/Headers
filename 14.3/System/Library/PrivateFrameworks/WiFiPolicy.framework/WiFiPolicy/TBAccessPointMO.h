@class NSString, TBNetworkMO, NSDate;
@protocol TBScore;

@interface TBAccessPointMO : NSManagedObject <TBAccessPoint, NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *BSSID;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic, getter=isEdge) BOOL edge;
@property (readonly, nonatomic, getter=isTCPGood) BOOL TCPGood;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TBScore> popularityScore;
@property (readonly, nonatomic) id<TBScore> qualityScore;
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSDate *created;
@property (nonatomic) BOOL edge;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) int popularityScoreValue;
@property (nonatomic) int qualityScoreValue;
@property (nonatomic) BOOL tcpGood;
@property (retain, nonatomic) TBNetworkMO *network;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateNewAccessPointObjectFromMOC:(id)a0;
+ (void)removeAllAccessPointsInMOC:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
