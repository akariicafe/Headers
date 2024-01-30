@class NSString;
@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>

@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) id<CCUIAnimationTimingFunctionDescription> timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithAnimationParameters:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
