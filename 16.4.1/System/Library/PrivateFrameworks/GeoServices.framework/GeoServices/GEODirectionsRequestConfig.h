@class NSString, NSNumber, GEODirectionsRequest;

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring> {
    NSNumber *_requestPriority;
    GEODirectionsRequest *_request;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)urlType;
- (unsigned long long)multipathServiceType;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;
- (id)additionalHTTPHeaders;
- (id)additionalStatesForNetworkEvent;
- (BOOL)usesBackgroundURL;
- (id)serviceTypeNumber;
- (void).cxx_destruct;
- (id)additionalURLQueryItems;
- (id)initWithRequest:(id)a0 requestPriority:(id)a1;

@end
