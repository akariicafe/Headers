@class PXStoryConfiguration, NSString, PXStoryExportVideoOptions, PXExtendedTraitCollection;
@protocol PXStoryErrorReporter;

@interface PXStoryExportConfiguration : NSObject <PXStoryMutableExportConfiguration>

@property (retain, nonatomic) NSString *activityType;
@property (retain, nonatomic) NSString *activityCategory;
@property (weak, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) PXStoryExportVideoOptions *videoOptions;
@property (readonly, nonatomic) PXStoryConfiguration *storyConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
