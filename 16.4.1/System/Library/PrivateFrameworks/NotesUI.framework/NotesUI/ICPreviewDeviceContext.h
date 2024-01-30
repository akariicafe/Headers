@class NSArray;

@interface ICPreviewDeviceContext : NSObject {
    NSArray *_deviceScales;
}

@property (copy) NSArray *scalableDeviceInfo;
@property (copy) NSArray *nonScalableDeviceInfo;
@property (readonly) NSArray *deviceScales;
@property (readonly) double maxDeviceScale;

+ (id)sharedContext;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (double)maxSizeOfPreviewDeviceInfoImage;
- (id)deviceInfoScalable:(BOOL)a0;
- (void)screensChangedNotification:(id)a0;

@end
