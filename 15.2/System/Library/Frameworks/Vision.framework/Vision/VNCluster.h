@class NSArray, NSDictionary;

@interface VNCluster : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *objects;
@property (nonatomic) unsigned long long clusterId;
@property (nonatomic) unsigned long long totalObjectCount;
@property (nonatomic) BOOL shouldUpdateRepresentative;
@property (retain, nonatomic) NSArray *suggestedIdsForRepresentative;
@property (retain, nonatomic) NSDictionary *representativenessById;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
