@class ATXHeuristicDevice;

@interface ATXWidgetMetadataDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)fetchWidgetMetadataForAppBundleIds:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
