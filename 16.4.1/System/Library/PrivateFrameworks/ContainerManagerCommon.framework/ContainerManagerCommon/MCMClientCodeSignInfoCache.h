@class NSString;
@protocol MCMCache;

@interface MCMClientCodeSignInfoCache : NSObject <MCMClientCodeSignInfoCache>

@property (readonly, nonatomic) id<MCMCache> cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
