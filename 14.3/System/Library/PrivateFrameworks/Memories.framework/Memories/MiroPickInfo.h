@protocol MiroMediaItem;

@interface MiroPickInfo : NSObject <NSCopying>

@property (nonatomic) float score;
@property (nonatomic) float distance;
@property (nonatomic) float splitDistance;
@property (nonatomic) unsigned long long pickOrder;
@property (nonatomic) unsigned long long adjustedPickOrder;
@property (nonatomic) unsigned long long sourceOrder;
@property (nonatomic) unsigned long long splitOrder;
@property (readonly, nonatomic) id<MiroMediaItem> item;
@property (readonly, nonatomic) float imageDistance;
@property (readonly, nonatomic) unsigned long long clipCompareResultFlags;
@property (readonly, nonatomic) double idealDuration;
@property (readonly, nonatomic) double idealDurationWithTrim;
@property (readonly, nonatomic) double biasedDuration;
@property (readonly, nonatomic) double maxPleasantDuration;

+ (id)pickInfoWithItem:(id)a0 score:(float)a1 distance:(float)a2 splitDistance:(float)a3 pickOrder:(unsigned long long)a4 adjustedPickOrder:(unsigned long long)a5 sourceOrder:(unsigned long long)a6 splitOrder:(unsigned long long)a7 imageDistance:(float)a8 clipCompareResultFlags:(unsigned long long)a9;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (double)idealDurationForBlueprint:(id)a0 biased:(BOOL)a1 maxPleasant:(BOOL)a2 respectTrim:(BOOL)a3;
- (double)trimmedDuration;
- (double)_idealDurationForBlueprint:(id)a0 biased:(BOOL)a1 max:(BOOL)a2;
- (double)voiceRangeDuration;
- (double)idealDurationForBlueprint:(id)a0 respectTrim:(BOOL)a1;

@end
