@class NSURL, NSString;

@interface _ICQDynamicUISpecification : NSObject

@property (readonly, nonatomic) NSURL *routeURL;
@property (readonly, nonatomic) NSURL *pageContentsURL;
@property (readonly, nonatomic) NSString *attributionSuffix;

- (void).cxx_destruct;
- (id)initWithRouteURL:(id)a0 pageContentsURL:(id)a1 attributionSuffix:(id)a2;

@end
