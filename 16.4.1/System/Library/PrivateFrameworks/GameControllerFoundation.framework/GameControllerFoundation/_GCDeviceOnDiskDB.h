@class NSArray;

@interface _GCDeviceOnDiskDB : NSObject {
    NSArray *_bundles;
}

@property (readonly, copy) NSArray *configurationBundles;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundles:(id)a0;
- (id)bestModelMatchingDevice:(id)a0;

@end
