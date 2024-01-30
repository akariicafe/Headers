@class NPTPingResult, NPTMetricResult, NSDictionary;

@interface NPTResults : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NPTMetricResult *downloadResults;
@property (retain, nonatomic) NPTMetricResult *uploadResults;
@property (retain, nonatomic) NPTPingResult *pingResults;
@property (retain, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSDictionary *asDictionary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
