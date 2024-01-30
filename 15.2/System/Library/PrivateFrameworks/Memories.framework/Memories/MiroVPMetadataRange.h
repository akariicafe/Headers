@class NSDictionary;

@interface MiroVPMetadataRange : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) int startTimeInFrames;
@property (readonly, nonatomic) int durationInFrames;
@property (readonly, nonatomic) NSDictionary *analysisDict;
@property (readonly, nonatomic) double score;

+ (id)descriptionForType:(unsigned long long)a0;
+ (id)descriptionForFlags:(unsigned long long)a0;
+ (void)enumerateByAscendingTypes:(id)a0 handler:(id /* block */)a1;
+ (id)mergeRanges:(id)a0 withRanges:(id)a1;
+ (id)rangeWithType:(unsigned long long)a0 flags:(unsigned long long)a1 startTimeInFrames:(int)a2 durationInFrames:(int)a3 analysisDict:(id)a4;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)_setScore:(double)a0;

@end
