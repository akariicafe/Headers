@class NSString;
@protocol SXResourceDataSourceProvider, SWReachabilityProvider;

@interface SXGalleryItemImageViewFactory : NSObject <SXGalleryItemImageViewFactory>

@property (readonly, nonatomic) id<SXResourceDataSourceProvider> resourceDataSourceProvider;
@property (readonly, nonatomic) id<SWReachabilityProvider> reachabilityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)imageViewForGalleryItem:(id)a0 imageResource:(id)a1;
- (id)initWithResourceDataSourceProvider:(id)a0 reachabilityProvider:(id)a1;

@end
