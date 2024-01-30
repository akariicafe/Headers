@class NSString;

@interface _EARLatticeMitigatorResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) float threshold;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVersion:(id)a0 score:(float)a1 threshold:(float)a2;

@end
