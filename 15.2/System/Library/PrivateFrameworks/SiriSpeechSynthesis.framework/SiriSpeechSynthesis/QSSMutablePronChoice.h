@class NSString;

@interface QSSMutablePronChoice : QSSPronChoice

@property (copy, nonatomic) NSString *pron_sequence;
@property (nonatomic) float log_weight;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
