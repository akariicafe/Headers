@class NSNumber;

@interface MTROnOffClusterOffWithEffectParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *effectId;
@property (copy, nonatomic) NSNumber *effectIdentifier;
@property (copy, nonatomic) NSNumber *effectVariant;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
