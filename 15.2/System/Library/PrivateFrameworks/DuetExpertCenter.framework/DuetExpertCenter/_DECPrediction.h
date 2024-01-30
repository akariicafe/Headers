@class NSArray, NSDictionary, NSDate, _DECPredictionExpiry;

@interface _DECPrediction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) long long reason;
@property (retain, nonatomic) NSDictionary *reasonMetadata;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) _DECPredictionExpiry *expiry;

+ (id)predictionWithItems:(id)a0 expiry:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)filterItems:(id)a0;
- (id)initWithItems:(id)a0 expiry:(id)a1;

@end
