@class NSString;
@protocol SXResourceDataSourceProvider, SWReachabilityProvider;

@interface SXImageViewFactory : NSObject <SXImageViewFactory>

@property (readonly, nonatomic) id<SXResourceDataSourceProvider> resourceDataSourceProvider;
@property (readonly, nonatomic) id<SWReachabilityProvider> reachabilityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
