@class NSString;
@protocol CSMyriadSelfTriggerCoordinatorDelegate;

@interface CSMyriadSelfTriggerCoordinator : NSObject <CSSelfTriggerDetectorDelegate>

@property (weak, nonatomic) id<CSMyriadSelfTriggerCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selfTriggerDetector:(id)a0 didDetectSelfTrigger:(id)a1;
- (void).cxx_destruct;

@end
