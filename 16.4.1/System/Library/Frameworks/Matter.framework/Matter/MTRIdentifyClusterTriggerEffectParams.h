@class NSNumber;

@interface MTRIdentifyClusterTriggerEffectParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *effectIdentifier;
@property (copy, nonatomic) NSNumber *effectVariant;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
