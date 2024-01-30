@class NSArray, NSString, CAMediaTimingFunction;

@interface MPUAnimationFactory : NSObject <_UIBasicAnimationFactory>

@property (copy, nonatomic) NSArray *allowedKeyPaths;
@property (copy, nonatomic) NSString *fillMode;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property (nonatomic) double timeOffset;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
