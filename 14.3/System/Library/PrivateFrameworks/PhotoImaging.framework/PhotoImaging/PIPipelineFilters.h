@interface PIPipelineFilters : NSObject

+ (id)sourceFilterNoOrientation;
+ (id)overcaptureSourceFilter;
+ (id)noMuteFilter;
+ (id)noTrimFilter;
+ (id)stripAllTimeAdjustmentsFilter;
+ (id)autoloopStabilizedVideoFilter;
+ (id)preGeometryFilter;
+ (id)autoCropFilter;
+ (id)exifOrientationAndCropStraightenOnly;
+ (id)rawFaceBalanceFilter;
+ (id)rawSourceFilterIncludingOrientation;
+ (id)sushiLevel1Filter;
+ (id)noRedEyeFilter;
+ (id)noCropFilter;
+ (id)iosCropToolFilter;
+ (id)noGeometryFilter;
+ (id)noOrientationFilter;
+ (id)perspectiveStraightenWithoutCropFilter;
+ (id)postGeometryFilter;
+ (id)inputToCropFilter;
+ (id)stopAtTagIncludeGeometryFilter:(id)a0;
+ (id)stopAtTagIncludeOrientationFilter:(id)a0;
+ (id)applyOrientationFilter;
+ (id)primarySourceFilter;
+ (id)spatialOvercaptureVideoSourceFilter;
+ (id)oneShotPortraitV2ExportFilter;
+ (id)socPseudoColorFilter;

@end
