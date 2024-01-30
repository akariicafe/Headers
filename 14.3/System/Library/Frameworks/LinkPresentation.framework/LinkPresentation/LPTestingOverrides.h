@class NSNumber, NSString;
@protocol LPTestingLoader;

@interface LPTestingOverrides : NSObject

@property (class, nonatomic) BOOL forceRTL;
@property (class, nonatomic) unsigned long long forceImageLoadingScaleFactor;
@property (class, retain, nonatomic) NSNumber *forceSubsampleImagesToScreenSize;
@property (class, retain, nonatomic) NSString *forceContentSizeCategory;
@property (class, nonatomic) BOOL forceEnableAllEntitlements;
@property (class, nonatomic) BOOL forceAllowPreviewingFilesOutsideApplicationContainer;
@property (class, retain, nonatomic) id<LPTestingLoader> customLoader;

+ (void)reset;

@end
