@class NSString, CAMediaTimingFunction;

@interface NUAnimationFactory : NSObject <_UIBasicAnimationFactory>

@property (readonly, nonatomic) CAMediaTimingFunction *mediaTimingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
