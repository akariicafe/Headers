@class NSDictionary, NSArray;

@interface MiroMetadataRange : NSObject

@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) unsigned long long type;
@property (nonatomic) int startTimeInFrames;
@property (nonatomic) int durationInFrames;
@property (retain, nonatomic) NSDictionary *analysisDict;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long rating;
@property (retain, nonatomic) NSArray *childRanges;

+ (id)descriptionForType:(unsigned long long)a0;
+ (id)rangeWithRange:(id)a0;
+ (id)descriptionForFlags:(unsigned long long)a0;
+ (id)rangeWithType:(unsigned long long)a0;
+ (void)miro_computeAndSetStaticScoreWithFlags:(unsigned long long)a0 forRanges:(id)a1;
+ (void)enumerateByAscendingTypes:(id)a0 handler:(id /* block */)a1;
+ (id)mergeRanges:(id)a0 withRanges:(id)a1;
+ (id)rangeWithVPMetadataRange:(id)a0;
+ (double)miro_computeStaticScoreWithFlags:(unsigned long long)a0;

- (id)_description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (int)durationOfOverlapWithStart:(int)a0 duration:(int)a1;
- (id)_treeDescriptionWithDepthLevel:(unsigned long long)a0;
- (int)durationOfOverlapWithRange:(id)a0;

@end
