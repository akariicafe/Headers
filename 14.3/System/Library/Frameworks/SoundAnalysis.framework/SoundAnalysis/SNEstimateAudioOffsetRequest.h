@class NSString, SNAudioOffsetEstimator;

@interface SNEstimateAudioOffsetRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest> {
    SNAudioOffsetEstimator *_detector;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)createAnalyzerWithError:(id *)a0;
- (BOOL)isEqualToEstimateAudioOffsetRequest:(id)a0;

@end
