@class NSArray, NSDictionary;

@interface VNCluster : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *objects;
@property (nonatomic) unsigned long long clusterId;
@property (nonatomic) unsigned long long totalObjectCount;
@property (nonatomic) BOOL shouldUpdateRepresentative;
@property (retain, nonatomic) NSArray *suggestedIdsForRepresentative;
@property (retain, nonatomic) NSDictionary *representativenessById;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
