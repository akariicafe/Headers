@interface PIPipelineFilters : NSObject

+ (id)stopAtTagIncludeGeometryFilter:(id)a0;
+ (id)applyOrientationFilter;
+ (id)autoCropFilter;
+ (id)autoloopStabilizedVideoFilter;
+ (id)exifOrientationAndCropStraightenOnly;
+ (id)histogramOptimizationFilter;
+ (id)inputToCropFilter;
+ (id)iosCropToolFilter;
+ (id)noCropFilter;
+ (id)noGeometryFilter;
+ (id)noMuteFilter;
+ (id)noOrientationFilter;
+ (id)noRedEyeFilter;
+ (id)noTrimFilter;
+ (id)oneShotPortraitV2ExportFilter;
+ (id)orientationAsMetaDataFilter;
+ (id)overcaptureSourceFilter;
+ (id)perspectiveStraightenWithoutCropFilter;
+ (id)postGeometryFilter;
+ (id)preGeometryFilter;
+ (id)primarySourceFilter;
+ (id)rawFaceBalanceFilter;
+ (id)rawSourceFilterIncludingOrientation;
+ (id)socPseudoColorFilter;
+ (id)sourceFilterNoOrientation;
+ (id)spatialOvercaptureVideoSourceFilter;
+ (id)stopAtTagIncludeOrientationFilter:(id)a0;
+ (id)stripAllTimeAdjustmentsFilter;
+ (id)sushiLevel1Filter;

@end
