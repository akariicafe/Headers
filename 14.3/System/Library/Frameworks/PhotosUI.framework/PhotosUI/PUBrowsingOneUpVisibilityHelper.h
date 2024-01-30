@class PUBrowsingViewModel, NSString;

@interface PUBrowsingOneUpVisibilityHelper : NSObject <PUBrowsingViewModelChangeObserver>

@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic) BOOL isOneUpVisible;
@property (readonly, nonatomic) BOOL isPresentedForSecondScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_performOnDemandCameraProcessingAdjustmentIfNeeded:(id)a0;
+ (BOOL)_shouldPerformOnDemandCameraProcessingAdjustment:(id)a0 isOneUpVisible:(BOOL)a1 isPresentedForSecondScreen:(BOOL)a2;

@end
