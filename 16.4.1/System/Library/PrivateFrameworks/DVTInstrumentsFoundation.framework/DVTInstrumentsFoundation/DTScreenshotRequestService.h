@class NSString;

@interface DTScreenshotRequestService : DTXService <DTScreenshotRequestServiceAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (id)takeScreenshot;
- (id)_screenshotServiceRequestWithError:(id *)a0;
- (id)_screenshotWithError:(id *)a0;

@end
