@class PPLocation;

@interface PPScoredLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PPLocation *location;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double sentimentScore;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithLocation:(id)a0 score:(double)a1 sentimentScore:(double)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToScoredLocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
