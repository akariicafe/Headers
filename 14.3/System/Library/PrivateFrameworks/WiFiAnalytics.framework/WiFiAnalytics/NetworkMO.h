@class NSString, BlacklistMO, NSSet, NSObject;

@interface NetworkMO : NSManagedObject

@property (nonatomic) int authFlags;
@property (retain, nonatomic) NSObject *channels;
@property (nonatomic) long long colocatedState;
@property (nonatomic) BOOL isHome;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL isOmnipresent;
@property (nonatomic) BOOL isWork;
@property (nonatomic) long long networkScore;
@property (readonly, nonatomic) long long numBSS;
@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) long long switchedAwayFromCount;
@property (nonatomic) long long switchedToCount;
@property (nonatomic) int usageRank;
@property (retain, nonatomic) BlacklistMO *blacklist;
@property (retain, nonatomic) NSSet *bss;

+ (id)entityName;
+ (id)fetchRequest;

@end
