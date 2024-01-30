@class NSString, CAMediaTimingFunction, NSDate;

@interface HKPropertyAnimation : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *appliedDate;
@property (retain, nonatomic) NSString *property;
@property (retain, nonatomic) id fromValue;
@property (retain, nonatomic) id toValue;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) long long secondaryAnimationCurve;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ propertyApplicationFunction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_validate;
- (BOOL)_isCompleted;
- (void)_applyWithCurrentDate:(id)a0;
- (void)_finishCancelled:(BOOL)a0;

@end
