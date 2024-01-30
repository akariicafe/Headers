@class FIIntervalQuantityTrigger, FIMutableTimeSliceGroup, NSDate;

@interface FIQuantityIntervalController : NSObject <FIIntervalController> {
    FIIntervalQuantityTrigger *_quantityTrigger;
    FIMutableTimeSliceGroup *_sliceGroup;
}

@property (readonly, nonatomic) BOOL intervalComplete;
@property (readonly, nonatomic) NSDate *intervalEndDate;
@property (readonly, nonatomic) BOOL allSlicesFinalized;

- (void).cxx_destruct;
- (void)addSample:(id)a0;
- (BOOL)allSlicesFinalized;
- (BOOL)_updateTriggerWithSample:(id)a0;
- (BOOL)intervalComplete;
- (id)initWithIntervalQuantityType:(id)a0 threshold:(id)a1 startDate:(id)a2 trackedQuantityTypes:(id)a3;
- (BOOL)isIntervalEndDate;

@end
