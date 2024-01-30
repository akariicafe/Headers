@class ATXHeuristicDevice;

@interface ATXCurrentLocationDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)obtainOneTimeLocationWithCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
