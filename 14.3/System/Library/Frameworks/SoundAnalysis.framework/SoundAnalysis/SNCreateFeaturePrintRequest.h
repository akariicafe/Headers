@class NSString;

@interface SNCreateFeaturePrintRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long featurePrintType;
@property (nonatomic) float overlapFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)createAnalyzerWithError:(id *)a0;
- (BOOL)isEqualToCreateFeaturePrintRequest:(id)a0;

@end
