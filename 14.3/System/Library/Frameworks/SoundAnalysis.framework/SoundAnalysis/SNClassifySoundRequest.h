@class NSString, MLModel;

@interface SNClassifySoundRequest : NSObject <SNAnalyzerCreating, SNRequest> {
    MLModel *_model;
}

@property double overlapFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)createAnalyzerWithError:(id *)a0;
- (BOOL)isEqualToClassifySoundRequest:(id)a0;

@end
