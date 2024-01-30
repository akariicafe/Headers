@class NSCache, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MKPlaceCollectionsPublisherIconManager : NSObject <NSCacheDelegate, MKPublisherIconProvider> {
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;
}

@property (retain, nonatomic) NSCache *publisherIconCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
