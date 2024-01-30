@interface PLSlalomUtilities : NSObject

+ (id)videoAVObjectBuilderForManagedAsset:(id)a0 applyVideoAdjustments:(BOOL)a1;
+ (double)durationForManagedAsset:(id)a0 applyVideoAdjustments:(BOOL)a1;
+ (double)durationForBaseDuration:(double)a0 videoAdjustments:(id)a1;
+ (id)synchronouslyFetchVideoAdjustmentsFromManagedAsset:(id)a0;

@end
