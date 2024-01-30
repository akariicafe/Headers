@class NSString;

@interface PUVignetteAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataSource:(id)a0 adjustmentInfo:(id)a1 populateNewAdjustmentController:(id)a2;

@end
