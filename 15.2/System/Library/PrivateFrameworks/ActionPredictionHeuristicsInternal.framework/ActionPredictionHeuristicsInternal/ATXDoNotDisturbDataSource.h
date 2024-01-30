@class ATXHeuristicDevice;

@interface ATXDoNotDisturbDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)isDNDActive:(id /* block */)a0;

@end
