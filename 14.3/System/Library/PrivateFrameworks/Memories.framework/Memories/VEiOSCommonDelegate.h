@interface VEiOSCommonDelegate : NSObject

+ (id)mainBundle;
+ (float)videoScale;
+ (void)setVideoScale:(float)a0;
+ (void)setDelegateSubclass:(Class)a0;
+ (BOOL)fullScreenPlaybackOnExternalDisplay;
+ (BOOL)allowSaving;
+ (BOOL)ignoreReadOnly;
+ (id)currentProject;
+ (void)nukeCaches;
+ (id)activeCoreProjectViewController;
+ (BOOL)shouldPlaySlowMoWhenPreviewing;
+ (unsigned long long)playbackFrameRateMode;
+ (unsigned long long)exportFrameRateMode;
+ (float)duckingAmount;
+ (BOOL)forceTeardownDisplayOnProjectChange;
+ (BOOL)updateProjectAndCachesOnPhotosLibraryChange;
+ (long long)playbackPixelCount;
+ (void)setCurrentProject:(id)a0;
+ (void)notifyCPVCProjectChanged;
+ (BOOL)furtherConstrainVideoScale;
+ (void)setFullScreenPlaybackOnExternalDisplay:(BOOL)a0;

@end
