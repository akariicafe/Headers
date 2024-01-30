@class NSNumber;

@interface MTRColorControlClusterEnhancedMoveToHueParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *enhancedHue;
@property (copy, nonatomic) NSNumber *direction;
@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSNumber *optionsMask;
@property (copy, nonatomic) NSNumber *optionsOverride;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
