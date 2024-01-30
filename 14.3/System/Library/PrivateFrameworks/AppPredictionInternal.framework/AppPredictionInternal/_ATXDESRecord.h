@class NSArray, NSString;

@interface _ATXDESRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { double x0[807]; double x1; } *predictionItems;
@property (readonly, nonatomic) unsigned long long predictionCount;
@property (readonly, nonatomic) NSArray *bundleIds;
@property (readonly, nonatomic) NSString *launchBundle;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) unsigned long long consumerType;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (unsigned long long)hash;
- (id)info;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithScores:(const struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; } x2; } *)a0 version:(long long)a1 launchBundle:(id)a2;
- (id)initWithAppsByRank:(id)a0 version:(long long)a1 launchBundle:(id)a2 consumerType:(unsigned long long)a3;

@end
