@class NSString;
@protocol NUURLHandling;

@interface NURouter : NSObject <NURouter>

@property (readonly, nonatomic) id<NUURLHandling> urlHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURLHandler:(id)a0;
- (void)routeToNewsAppForYouFeed;

@end
