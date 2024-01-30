@interface CAMOrientationUtilities : NSObject

+ (long long)imageOrientationForVideoRequest:(id)a0;
+ (long long)videoTrackOrientationForVideoRequest:(id)a0;
+ (long long)captureOrientationFromPanoramaCaptureOrientation:(long long)a0;
+ (int)exifOrientationForVideoRequest:(id)a0;
+ (long long)panoramaCaptureOrientationFromCaptureOrientation:(long long)a0;
+ (long long)imageOrientationOfResult:(id)a0 withCaptureDevice:(long long)a1 captureOrientation:(long long)a2;

@end
