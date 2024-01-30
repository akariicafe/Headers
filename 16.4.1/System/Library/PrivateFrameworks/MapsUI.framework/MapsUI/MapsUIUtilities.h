@interface MapsUIUtilities : NSObject

+ (BOOL)isParsecProcess;
+ (BOOL)isSafariProcess;
+ (BOOL)isSiriProcess;
+ (id)bundleIdentifierForContext:(unsigned long long)a0;
+ (void)checkDeviceLockStatusWithCompletion:(id /* block */)a0;
+ (BOOL)deviceIsLockedAndNeedsPasscode;
+ (BOOL)isDataDetectorsProcess;
+ (BOOL)isInApplicationContext:(unsigned long long)a0;
+ (BOOL)isMapsProcess;
+ (BOOL)isSpotlightProcess;
+ (void)performOnMainIfNecessary:(id /* block */)a0;
+ (void)resizeImageIfNeeded:(id)a0 toFrameSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 completion:(id /* block */)a3;

@end
