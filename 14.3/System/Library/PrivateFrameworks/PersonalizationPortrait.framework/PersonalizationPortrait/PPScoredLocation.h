@class PPLocation;

@interface PPScoredLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PPLocation *location;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double sentimentScore;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 score:(double)a1 sentimentScore:(double)a2;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToScoredLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
