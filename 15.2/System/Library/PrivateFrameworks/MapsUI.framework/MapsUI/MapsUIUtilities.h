@interface MapsUIUtilities : NSObject

+ (BOOL)isSafariProcess;
+ (BOOL)isSiriProcess;
+ (BOOL)isParsecProcess;
+ (BOOL)deviceIsLockedAndNeedsPasscode;
+ (void)checkDeviceLockStatusWithCompletion:(id /* block */)a0;
+ (void)resizeImageIfNeeded:(id)a0 toFrameSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 completion:(id /* block */)a3;
+ (BOOL)isMapsProcess;
+ (void)performOnMainIfNecessary:(id /* block */)a0;
+ (BOOL)isInApplicationContext:(unsigned long long)a0;
+ (BOOL)isSpotlightProcess;
+ (BOOL)isDataDetectorsProcess;
+ (id)bundleIdentifierForContext:(unsigned long long)a0;

@end
