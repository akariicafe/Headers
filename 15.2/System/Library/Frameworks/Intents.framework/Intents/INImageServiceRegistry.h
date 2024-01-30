@class NSArray, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface INImageServiceRegistry : NSObject {
    NSMutableDictionary *_imageServicesByServiceIdentifier;
    NSMutableArray *_prioritySortedImageServices;
    NSObject<OS_dispatch_queue> *_registryQueue;
}

@property (readonly, copy, nonatomic) NSArray *imageLoaders;
@property (readonly, copy, nonatomic) NSArray *imageStorageServices;
@property (readonly, copy, nonatomic) NSArray *imageServices;

+ (id)sharedInstance;

- (void)unregisterImageService:(id)a0;
- (void)registerImageService:(id)a0;
- (void)_reprioritizeImageServices;
- (id)imageServiceForServiceIdentifier:(id)a0;
- (id)imageLoaderForServiceIdentifier:(id)a0;
- (id)imageStorageServiceForServiceIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
