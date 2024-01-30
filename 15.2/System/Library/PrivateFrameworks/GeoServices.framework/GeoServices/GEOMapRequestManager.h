@class geo_isolater, NSMutableSet;

@interface GEOMapRequestManager : NSObject {
    NSMutableSet *_requests;
    geo_isolater *_isolater;
}

- (void)trackRequest:(id)a0;
- (void)requestComplete:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
