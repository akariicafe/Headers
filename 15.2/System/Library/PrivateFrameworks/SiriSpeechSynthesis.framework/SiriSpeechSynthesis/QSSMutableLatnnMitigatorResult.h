@class NSString;

@interface QSSMutableLatnnMitigatorResult : QSSLatnnMitigatorResult

@property (nonatomic) BOOL processed;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) double threshold;
@property (nonatomic) double score;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
