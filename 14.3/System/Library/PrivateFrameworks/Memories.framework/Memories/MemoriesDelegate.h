@interface MemoriesDelegate : NSObject

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

@end
