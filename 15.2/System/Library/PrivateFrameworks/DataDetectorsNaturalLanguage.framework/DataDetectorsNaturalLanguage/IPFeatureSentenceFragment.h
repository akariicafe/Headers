@interface IPFeatureSentenceFragment : NSObject

@property struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property unsigned long long clusterType;
@property (readonly, nonatomic) unsigned long long mainPolarity;
@property double probability_None;
@property double probability_Rejection;
@property double probability_Proposal;
@property double probability_Confirmation;

+ (id)fragmentWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 clusterType:(unsigned long long)a1;

- (id)description;

@end
