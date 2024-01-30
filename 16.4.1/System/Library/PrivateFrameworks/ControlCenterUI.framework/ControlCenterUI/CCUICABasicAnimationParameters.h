@class NSString;
@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>

@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) id<CCUIAnimationTimingFunctionDescription> timingFunction;
@property (readonly, nonatomic) struct CAFrameRateRange { float minimum; float maximum; float preferred; } frameRateRange;
@property (readonly, nonatomic) unsigned int highFrameRateReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithAnimationParameters:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
