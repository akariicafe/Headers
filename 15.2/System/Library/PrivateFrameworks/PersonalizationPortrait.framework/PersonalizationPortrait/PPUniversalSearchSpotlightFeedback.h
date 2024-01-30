@class NSString, NSDate;

@interface PPUniversalSearchSpotlightFeedback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) unsigned int offeredCSSICount;
@property (readonly, nonatomic) unsigned int engagedCSSICount;
@property (readonly, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) NSDate *timestamp;

- (id)initWithOfferedCSSICount:(unsigned int)a0 engagedCSSICount:(unsigned int)a1;
- (id)initWithOfferedCSSICount:(unsigned int)a0 engagedCSSICount:(unsigned int)a1 timestamp:(id)a2 clientIdentifier:(id)a3 clientBundleId:(id)a4;
- (BOOL)isEqualToPPUniversalSearchSpotlightFeedback:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
