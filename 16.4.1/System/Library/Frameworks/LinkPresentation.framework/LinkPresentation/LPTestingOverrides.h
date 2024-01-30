@class NSNumber, NSArray;
@protocol LPTestingLoader;

@interface LPTestingOverrides : NSObject

@property (class, nonatomic) BOOL forceRTL;
@property (class, nonatomic) unsigned long long forceImageLoadingScaleFactor;
@property (class, retain, nonatomic) NSNumber *forceSubsampleImagesToScreenSize;
@property (class, nonatomic) BOOL forceEnableAllEntitlements;
@property (class, nonatomic) BOOL forceIgnoreAllTCCChecks;
@property (class, nonatomic) BOOL forceMonospaceFonts;
@property (class, retain, nonatomic) id<LPTestingLoader> customLoader;
@property (class, copy, nonatomic) NSArray *additionalAllowedFileURLDirectories;

+ (void)reset;

@end
