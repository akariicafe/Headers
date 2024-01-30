@class NSArray;

@interface FIMutableTimeSliceGroup : NSObject

@property (readonly, nonatomic) NSArray *slices;
@property (readonly, nonatomic) BOOL allSlicesFinalized;

+ (id)timeSliceGroupForQuantityTypes:(id)a0 startDate:(id)a1;

- (void).cxx_destruct;
- (BOOL)allSlicesFinalized;
- (void)commitAllSlicesToDate:(id)a0;
- (id)initWithTimeSlices:(id)a0;
- (void)updateSlicesWithEndDate:(id)a0;
- (void)updateSlicesWithSample:(id)a0;

@end
