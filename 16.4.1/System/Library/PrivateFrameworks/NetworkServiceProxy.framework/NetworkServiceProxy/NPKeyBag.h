@class NSArray, NSDictionary, NSPredicate, NSData;

@interface NPKeyBag : NSObject

@property (retain) NSDictionary *onRampMap;
@property (retain) NSArray *onRampList;
@property (retain) NSPredicate *validOnRampPredicate;
@property (retain) NSPredicate *validOnRampWithTFOPredicate;
@property (retain, nonatomic) NSArray *keys;
@property unsigned int index;
@property long long fallbackReason;
@property (nonatomic) unsigned int generation;
@property (retain, nonatomic) NSData *updateHash;
@property (nonatomic) long long TFOStatusOverride;
@property (nonatomic) double lastUsedTimestamp;
@property (readonly) double timeSinceLastUsed;

- (id)initWithData:(id)a0;
- (id)data;
- (id)init;
- (void).cxx_destruct;
- (id)copyUsableOnRamps:(BOOL)a0 requireTFO:(BOOL)a1;
- (void)createOnRamps;
- (id)getOnRampForEndpoint:(id)a0;
- (id)initWithOnRamps:(id)a0 currentNetworkInfo:(id)a1 currentEdgeIndex:(long long)a2 currentEdgeList:(id)a3 generation:(unsigned int)a4 identifier:(id)a5 updateHash:(id)a6;
- (void)logWithMessage:(id)a0 identifier:(id)a1;
- (void)moveToNextOnRamp;
- (void)moveToOnRamp:(id)a0;
- (void)removeIPv6Keys;
- (BOOL)updateHashMatchesEdgeSet:(id)a0;

@end
