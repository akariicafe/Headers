@class PHPhotoLibrary, NSString;

@interface PXAnalyticsFeatureUsageCountDestination : NSObject <CPAnalyticsDestinationProtocol>

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processEvent:(id)a0;
- (void)setPhotoLibrary:(id)a0;
- (void).cxx_destruct;

@end
